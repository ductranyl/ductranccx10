
#include<bits/stdc++.h>
using namespace std;
int a[100000];
//So Sieu nguyen to

bool isPrime(int n){
    if(n<2) return false;
    for(int i =2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    a[0] = 2;
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    int n= 4;
    int index =0;

    while(index<n){
        for(int i =0; i<=9; i++){
            int x = a[index]*10 + i;
            if(isPrime(x)){
                a[n++] = x;
            }
        }
        index++;
    }

    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}


