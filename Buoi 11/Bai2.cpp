#include <bits/stdc++.h>
using namespace std;
int a[1000][1000];
int dp[1000][1000];


int main()
{
    int n;
    cout << "nhap n= ";
    cin >> n;
    int m;
    cout << "nhap m= ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dp[i][j] = -1;
        }
    }
    dp[0][0] = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i + 1][j] > a[i][j] && i + 1 < n)
            {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + a[i + 1][j]);
            }
            if (a[i][j + 1] > a[i][j] && j + 1 < m)
            {
                dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + a[i][j + 1]);
            }
        }
    }

    if (dp[n - 1][m - 1] == -1)
    {
        cout << -1;
    }
    else
    {
        cout << dp[n - 1][m - 1]<<endl;
    }
   
    return 0;
}