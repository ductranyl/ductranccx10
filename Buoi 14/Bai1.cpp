#include<bits/stdc++.h>
using namespace std;

set<string> res;
vector<int> a(10);
vector<string> b(10);
string s;
int maxCount =0;
int N;



void dequy(int sum, int count){
    if(sum == N){
        int start=0;
        for(int i= 0; i<count; i++){
            b[i] ="";
            
            for(int j=start; j<a[i]+start; j++){
                b[i]+=s[j];
            }
            start+=a[i];
        }
        for(int i= 0; i<count; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;

        for(int i= 0; i<count; i++){
            res.insert(b[i]);
        }
        if(res.size()>maxCount){
            maxCount = res.size();
        }
        res.clear();
        
        return;
    }
    for(int i= 1; i<=N; i++){
        if(sum+i<=N){
            a[count] = i;
            dequy(sum+i,count+1);
        }
    }
}

int main() {
    getline(cin,s);
    N = s.size();
    dequy(0,0);
    cout<<maxCount<<endl;
    return 0;
}