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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    dp[0] = a[0];
    dp[1] = a[0] + a[1];
   
    b[0] = -1;
    b[1] = 0;
    for (int i = 2; i < n; i++)
    {
        if (dp[i - 1] > dp[i - 2])
        {
            dp[i] = dp[i - 1] + a[i];
            b[i] = i - 1;
        }
        else
        {
            dp[i] = dp[i - 2] + a[i];
            b[i] = i - 2;
        }
    }
    vector<int> res;
    int m = n-1;
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