#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int dp[1000000];
/*
1 2 1 3 4
dp[0] = 1 (1)
dp[1] = 2 (1,2;2)
dp[2] =1 (1)
dp[3]=2 (1,3 ; 3)
dp[4]= 3 (1,3,4 ;3,4; 4)

dp[1]=
*/
int main()
{
    int n;
    cout << "nhap n= ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += dp[i];
    }
    cout << sum;
    return 0;
}