
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    bool isCheck = true;
    cout<<"Nhap n= ";
    cin>>n;

    int a[n];

    for(int i =0; i< n; i++)
    {
        cin>>a[i];
    }

    for(int i =0; i< n-1; i++)
    {
        if( a[i] > a[i+1])
        {
            isCheck = false;
            cout<<"NO";
            break;
        }
    }
    if(isCheck)
    {
        cout<<"YES";
    }


    return 0;
}



