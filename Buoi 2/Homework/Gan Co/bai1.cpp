
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    bool isCheck = false;
    cout<<"Nhap n= ";
    cin>>n;
    int a[n];
    // Nhap mang
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    // In mang
    for(int i =0; i<n; i++){
        if(a[i]%2 ==0){
            cout<<a[i]<<" ";
            isCheck = true;
        }
    }
    if(!isCheck){
        cout<<-1;
    }
    return 0;
}



