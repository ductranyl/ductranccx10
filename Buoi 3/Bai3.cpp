
#include<bits/stdc++.h>
using namespace std;
int a[100000];


int main()
{
    int n;
    map<int, int> mp;
    bool isCheck = true;
    cout<<"Nhap n = ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i =0; i<n; i++){
        mp[a[i]]++;
    }


    for(auto it = mp.begin(); it!=mp.end();it++){
        if(it->second %2 != 0){
            cout<<"NO";
            isCheck = false;
            break;

        } 
    }

    if(isCheck){
        cout<<"YES";
    }

    return 0;
}


