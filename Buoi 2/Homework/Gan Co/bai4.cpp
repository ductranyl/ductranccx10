
#include<bits/stdc++.h>
using namespace std;


   int main()
{
    string s;
    bool isCheck = true;
    getline(cin,s);
    for(int i =0; i< s.length(); i++)
    {
        if(s[i]>=65 && s[i]<=90 )
        {
            cout<<"NO";
            isCheck = false;
            break;

        }
    }
    if(isCheck)
    {
        cout<<"YES";
    }

    return 0;
}



