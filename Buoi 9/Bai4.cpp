#include<bits/stdc++.h>
using namespace std;
long long dp[1000000];

/* 
vien gach la 2X1
2x3
dp[0] = 0
dp[1] = 1 / 1 la vien gach nam dung
dp[2] = 2 / 1 la nam dung 2 la vien gach nam ngang
dp[3] = 3 / 1 la nam dung 2 la nam ngang 3 la nam dung
dp[k]=  dp[k-1] + dp[k-2]

dp[k] = so cach xay hang rao co kich thuoc 2xk


 */

int main(){
    long long n;
    cout << "nhap n= ";
    cin >> n;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    
    for(long long i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2])%1000000007;
    }
    cout << dp[n];
    return 0;
}