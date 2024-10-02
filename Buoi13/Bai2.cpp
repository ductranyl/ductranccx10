#include<bits/stdc++.h>
using namespace std;


int dequy(int x, int n){
    if(x == n){
        return 0;
    }
    if(x > n){
        return 1e9;
    }
    
    int count1 = dequy(2*x,n)+1;
    int count2 = dequy(3*x+1,n)+1;
    return min(count1,count2);
}

int main(){
    int n;
    cin>>n;
    cout<<dequy(1,n);
    return 0;
}