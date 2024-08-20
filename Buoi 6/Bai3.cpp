
#include <bits/stdc++.h>
using namespace std;
long long a[100000000];

long long reverseNumber(long long n)
{
    long long res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

// Function to concatenate two numbers
long long concatNumber(long long a, long long b)
{
    long long temp = b;
    while (temp > 0)
    {
        a *= 10;
        temp /= 10;
    }
    return a + b;
}

int main()
{
    long long n;
    cout << "nhap n= ";
    cin >> n;

    long long count = 0;

    for (long long index = 1; index <= n; index++)
    {

        long long evenNumber = concatNumber(index, reverseNumber(index));
        if (evenNumber <= n)
        {
            a[count++] = evenNumber;
        }

        if (index >= 10)
        {
            long long oddNumber = concatNumber(index, reverseNumber(index / 10));
            if (oddNumber <= n)
            {
                a[count++] = oddNumber;
            }
        }
    }

    sort(a, a + count);

    int temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (i == 0 || a[i] != a[i - 1] && a[i] == reverseNumber(a[i]))
        {
            a[temp++] = a[i];
        }
    }


    for (int i = 0; i < temp; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}