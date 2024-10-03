#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
int N;
int totalSum =0;
int maxCount =1;

void dequy(int sum, int count, int index, int tongCon) {
    if (sum == totalSum) {
        maxCount = max(maxCount,count);
        return;
    }
    int temp = 0;
    for (int i = index; i <= N; i++) {
        temp +=a[i];
        if(temp == tongCon){
            dequy(sum + temp,count+1,i+1,tongCon); 
        }
     
    }
}

int main() {
    cin >> N;
    for(int i =0; i<N; i++){
        cin>>a[i];
        totalSum += a[i];
    }
    for(int i =1; i<=N; i++){
        if(totalSum%i==0){
            dequy(0,0,0,i);
        }
    }
    cout<<maxCount;
    return 0;
}