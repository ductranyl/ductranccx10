
#include<bits/stdc++.h>
using namespace std;
int a[100000];


int main()
{
    int n;
    map<int, bool> mp;
    bool isCheck = false;
    cout<<"Nhap n = ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i =0; i<n; i++){
        mp[a[i]] = true;
    }

   for(int i=1; i<=n; i++){
        cout<<mp[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i<=n; i++){
        if(!mp[i]){
            cout<<i<<" ";
            isCheck = true;
        }
    }

    if(!isCheck){
        cout<<-1;
    }

    return 0;
}


