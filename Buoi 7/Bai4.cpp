
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
        if (dp[i - 1] < 0)
        {
            dp[i] = dp[i - 1] + a[i];
        }
        else
        {
            dp[i] = a[i];
        }
    }

    int min = dp[0];
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (dp[i] <= min)
        {
            min = dp[i];
            minIndex = i;
        }
    }
    int sum = 0;
    int count =0;
    while (min != sum)
    {   
        b[count] = a[minIndex];
        sum += a[minIndex];
        minIndex--;
        count++;
    }
    
    for (int i = count - 1; i >= 0; i--)
    {
        cout << b[i] << " ";
    }
    return 0;
}