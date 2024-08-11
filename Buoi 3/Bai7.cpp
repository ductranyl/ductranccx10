
#include<bits/stdc++.h>
using namespace std;
int a[100000];


int main()
{
    int n;
    map<int, int> mp;
    bool isCheck = false;
    cout<<"Nhap n = ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i =0; i<n; i++){
        mp[a[i]] ++;
    }

    for(int i = 1; i<=n; i++){
        if(mp[i]==0){
            cout<<i<<" ";
            isCheck = true;
        }
    }
    cout<<endl;
    for(int i = 1; i<=n; i++){
        if(mp[i]>1){
            cout<<i<<" ";
        }
    }

    if(!isCheck){
        cout<<-1;
    }

    return 0;
}


