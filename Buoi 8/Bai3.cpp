
#include <bits/stdc++.h>
using namespace std;
int a[100000000];
int dp[100000000];
int b[100000000];


int main()
{
    int n;
    cout << "nhap n= ";
    cin >> n;

    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    dp[0] = 1;
    b[0] = -1;

    for(int i = 1; i<n; i++){
        dp[i] = 1;
        b[i] = -1;
        for(int j = 0; j<i; j++){
            if(a[i] > a[j]){
                if(dp[j] + 1 > dp[i]){
                    dp[i] = dp[j] + 1;
                    b[i] = j;
                }
            } 
        }
    }
    int maxValue = dp[0];
    int maxIndex = 0;
    for(int i = 1; i<n; i++){
        if(dp[i] > maxValue){
            maxValue = dp[i];
            maxIndex = i;
        }
    }
    vector<int> res;
    int m = maxIndex;
    res.push_back(a[m]);
    while(b[m]!= -1){
        m = b[m];
        res.push_back(a[m]);
    }
    for(int i = res.size()-1; i>=0; i--){
        cout<<res[i]<<" ";
    }   
    return 0;
}