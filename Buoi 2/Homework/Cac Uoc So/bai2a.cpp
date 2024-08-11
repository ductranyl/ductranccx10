
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
// In ra uoc le lon nhat cua N

bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    if( n%2 == 0)
    {
        return false;
    }
    for(int i =3; i< sqrt(n); i+=2)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long n;
    cout<<"Nhap so n: ";
    cin>>n;
    int countNo =n;
    int sum = 1;
// i là ước của n, n/i cũng là ước của n
    int a[n] = {0};
    for(int i =2; i<= n; i++)
    {
        while(n%i== 0)
        {
            if(isPrime(i))
            {
                a[i]++;
            }
            n=n/i;
        }
    }

    for(int i =0; i< countNo; i++)
    {
        if(a[i]!=0 && a[i]%2 == 1)
        {
            sum *= i;
        }

    }
    cout<< sum;
    return 0;
}



