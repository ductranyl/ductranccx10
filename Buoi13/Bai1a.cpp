#include<bits/stdc++.h>
using namespace std;

void dequy(string s, int n){
    if(s.length() == 2*n){
        cout<<s<<endl;
        return;
    }
    
    dequy("("+s+")",n);
    dequy(s+"()",n);
    dequy("()"+s,n);
    
}
int main(){

    return 0;
}