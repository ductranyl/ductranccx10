
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

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int k= firstDigit(n);
    int temp = lengthOfNumber(n);
    int ans = genNumber(temp, k);
    if(ans<n){
        k=k+1;
        ans = genNumber(temp, k);
    }
    cout << ans;
    return 0;
}
