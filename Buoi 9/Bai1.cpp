#include<bits/stdc++.h>
using namespace std;
int a[100000000];
int dp[100000000];
int b[100000000];
//  1 -2 3 9 5 4
/* 
dp[0] = 1
dp[1] = -2
dp[2] = 4 / dp[0] + a[2] = 4 
dp[3] = 10 / dp[0] + a[3] = 10 
dp[4] = 9/ dp[2] + a[4] = 9 
dp[5] = 14 / dp[3] + a[5] = 10 + 4 = 14
 */
int main(){
    int n;
    cout << "nhap n= ";
    cin >> n;
    
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    dp[0] = a[0];
    dp[1] = a[1];
    b[0] = -1;
    b[1] = 0;
    int maxV = dp[0];
    for(int i =2; i<n; i++){
        for(int j=0; j<i-1;j++){
            if(dp[j] >= maxV){
                maxV = dp[j];
                b[i] = j;
            }
        }
        dp[i] = maxV + a[i];
    }

    int max = dp[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (dp[i] > max)
        {
            max = dp[i];
            maxIndex = i;
        }
    }
    cout<<max<<endl;
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