
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
    if(a[0]%2 == 0){
        dp[0] =0;
    } else{
        dp[0] = 1;
    }
  
    for(int i =1; i<n; i++){
        if(a[i]%2 == 0){
            dp[i] = 0;
        } else{
            if(a[i]<a[i-1]){
                dp[i] = dp[i-1] + 1;
            } else{
                dp[i] = 1;
            }
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