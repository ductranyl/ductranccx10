
#include<bits/stdc++.h>
using namespace std;

//Nhập vào một số nguyên dương N (1 ≤ N ≤ 10^12).
//Đếm số lượng ước số của N.
//
//Ví dụ
//Ví dụ 1:
//Input	Output
//6	4
//Giải thích: 6 có 4 ước số là 1, 2, 3, 6.
//
//Ví dụ 2:
//Input	Output
//10	4
//Giải thích: 10 có 4 ước số là 1, 2, 5, 10.
bool isCP(int n)
{
    float x = sqrt(n);
    return x== int(x);
}
int main()
{
    long long n;
    int countNo =0;
    cout<<"Nhap so n: ";
    cin>>n;
// i là ước của n, n/i cũng là ước của n
    for(int i =1; i<= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            countNo +=2;
        }
    }
    if(isCP(n))
{
    countNo--;
}
cout<<countNo;
    return 0;
}



