
#include <bits/stdc++.h>
using namespace std;
int a[100000];

int lengthOfNumber(int n)
{
    int len = 0;
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return len;
}

int genNumber(int len, int n)
{
    int temp = n;
    while (len > 1)
    {
        n = n * 10 + temp;
        len--;
    }
    return n;
}
int firstDigit(int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}
void printLoop()
{
}

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int k = firstDigit(n);
    int temp = lengthOfNumber(n);
    int ans = 0;
    for (int i = 1; i < 10; i++)
    {
        cout << i << " ";
    }
    for (int i = 2; i <= temp; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            ans = genNumber(i, j);
            if (ans < n)
            {
                cout << ans << " ";
            }
        }
    }
    return 0;
}
