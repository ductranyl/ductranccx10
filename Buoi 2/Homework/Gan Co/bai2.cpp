
#include<bits/stdc++.h>
using namespace std;


int main()
{
   string s;
   bool isCheck = false;
   getline(cin,s);
   for(int i =0; i< s.length(); i++){
    if(s[i]>='0' && s[i]<='9'){
        cout<<s[i]<<" ";
        isCheck = true;
    }
   }
    if(!isCheck){
        cout<<-1;
    }
    return 0;
}



