
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
// In ra cac uoc so cua N theo thu tu tang dan

bool isCP(int n)
{
    float x = sqrt(n);
    return x == (int) x;
}
int main()
{
    long long a[100007];
    long long n;
    int index =0;
    cout<<"Nhap so n: ";
    cin>>n;
// i là ước của n, n/i cũng là ước của n
    for(int i =1; i<= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            a[index++] = i;
            if(isCP(n) && i == sqrt(n))
            {
                continue;
            }
            a[index++] = n/i;
        }
    }
    sort(a,a+index);
    for(int i =0; i<index; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}



