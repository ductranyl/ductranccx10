
#include <bits/stdc++.h>
using namespace std;
int a[100000000];
int dp[100000000];
/*
1 3 2 4
dp[0] = 1 (1)
dp[1] = 2 (1,3;3)
dp[2] = 2 (1,2;2)
dp[3] = 3 (1,2,4;2,4;4)

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
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += dp[i];
    }
    cout << sum;
    return 0;
}