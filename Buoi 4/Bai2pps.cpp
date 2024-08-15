
#include <bits/stdc++.h>
using namespace std;
// Cho số nguyên dương N, hãy tìm số chính phương nhỏ nhất lớn hơn hoặc bằng N.

int main()
{
    long long n;
    cout << "Nhap n = ";
    cin >> n;


    long long temp = ceil(double(sqrt(n)));
    cout << temp * temp;
    return 0;
}
