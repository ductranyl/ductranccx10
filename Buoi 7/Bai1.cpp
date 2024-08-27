
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

    dp[0] = 1;
    for(int i =1; i<n; i++){
        if(a[i] > a[i-1]){
            dp[i] = dp[i-1] + 1;
        } else{
            dp[i] = 1;
        }
    }
    
    int max = dp[0];
    int maxIndex = 0;
    for(int i =1; i<n; i++){
        if(dp[i] > max){
            max = dp[i];
            maxIndex = i;
        }
    }

    for(int i = maxIndex - max + 1; i<=maxIndex; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}