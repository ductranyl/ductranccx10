#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int dp[1000000];


int main(){
    int n;
    cout << "nhap n= ";
    cin >> n;

    int m;
    cout << "nhap m= ";
    cin >> m;   

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    dp[0] = 0;
    for(int i = 1; i <= m; i++){
        dp[i] = INT_MAX;
        for(int j =0; j < n-1; j++){
            if(i>=a[j]){
                if(dp[i-a[j]]+1<dp[i]){
                    dp[i] = dp[i-a[j]]+1;
                }
            }
        
        }           
    }
    cout << dp[m];
    return 0;
}