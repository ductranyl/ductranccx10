
#include <bits/stdc++.h>
using namespace std;
// Cho số nguyên N và K, hãy tìm số nhỏ nhất lớn hơn hoặc bằng N và chia hết cho K.

int main()
{
    long long n, k;
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap k = ";
    cin >> k;

    long long temp = ceil(double(n % k));
    cout << temp * k;
    return 0;
}
