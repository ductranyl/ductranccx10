
#include <bits/stdc++.h>
using namespace std;
int a[100000000];
int dp[100000000];


int main()
{
    int n;
    cout << "nhap n= ";
    cin >> n;

    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    dp[0] = a[0];

    
    int i=1;
    int count=1;
    while(i<n){
        if(a[i] < a[i+1]){
            dp[count] = dp[count-1] + a[i+1];
            i +=2;
        } else{
            dp[count] = dp[count-1] + a[i];
            i+=1;
        }
        count++;
    }
    
    
    cout<<dp[count-1];
    return 0;
}