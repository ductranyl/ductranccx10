/* 
hang rao co kich thuoc 4xn
duoc xay tu cac vien gach 2x1
dp[0] = 0
dp[1] = 1
dp[2] = 5
dp[3] = 11
dp[i] = dp[i-1] + 4*dp[i-2] + 2
dp[4] = 11 + 20 + 2 = 33
dp[5] = 33 + 44 + 2 = 79


 */
#include<bits/stdc++.h>
using namespace std;
long long dp[1000000];



int main(){
    long long n;
    cout << "nhap n= ";
    cin >> n;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 5;
    
    for(long long i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + 4*dp[i-2] + 2)%1000000007;
    }
    cout << dp[n];
    return 0;
}