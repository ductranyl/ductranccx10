
#include<bits/stdc++.h>
using namespace std;
int a[100000];


int main()
{
    int n;
    map<int, int> mp;
    cout<<"Nhap n = ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i =0; i<n; i++){
        mp[a[i]]++;
    }


    for(auto it = mp.begin(); it!=mp.end();it++){
        cout<<it->first<<" "; 
    }


    return 0;
}


