
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

    for (int i = 1; i < n; i++)
    {
        if (dp[i - 1] > 0)
        {
            dp[i] = dp[i - 1] + a[i];
        }
        else
        {
            dp[i] = a[i];
        }
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
    int count = 0;
    while (max > 0)
    {
        b[count] = a[maxIndex];
        max -= a[maxIndex];
        maxIndex--;
        count++;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        cout << b[i] << " ";
    }
    return 0;
}