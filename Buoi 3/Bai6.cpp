
#include<bits/stdc++.h>
using namespace std;
int teamToan[100000];
int teamTin[100000];
int ans[100000];

int main()
{
    int n,m;
    map<int, bool> mp;
    bool isCheck = false;
    int count =0;
    // Nhap so luong sinh vien trong doi tin hoc
    cout<<"Nhap n = ";
    cin>>n;
     // Nhap so luong sinh vien trong doi toan hoc
    cout<<"Nhap m = ";
    cin>>m;
    // nhap ma sinh vien trong doi tin hoc
    for(int i=0; i<n; i++){
        cin>>teamTin[i];
    }
    // nhap ma sinh vien trong doi toan hoc
    for(int i=0; i<m; i++){
        cin>>teamToan[i];
    }
    // them vao map cho ma sinh vien cua doi toan hoc
    for(int i =0; i<m; i++){
        mp[teamToan[i]] = true;
    }


    for(int i = 0; i<n; i++){
        if(!mp[teamTin[i]]){
            ans[count]= teamTin[i];
            count++;
            isCheck = true;
        }
    }

    if(!isCheck){
        cout<<-1;
    } else{
        for(int i =0; i<count; i++){
            cout<<ans[i]<<" ";
        }
    }

    return 0;
}


