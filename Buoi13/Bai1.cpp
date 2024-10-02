#include <bits/stdc++.h>
using namespace std;
/*
s la chuoi rong
s la chuoi dang (), voi s1 la chuoi ngoac dung
s la chuoi dang ()() voi s1s2 la chuoi ngoac dung
cho 1 bien n, hay liet ke tat cac cac chuoi ngoac dung  co do dai 2*n
*/
bool chuoiDung(string &s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count < 0)
        {
            return false;
        }
    }
    return count ==0;
}
void dequy(string s, int n)
{
    if (s.length() == 2 * n)
    {
        if(chuoiDung(s)){
            cout << s << endl;
        }
        return;
    }

    dequy(s + "(", n);

    dequy(s + ")", n);
}
int main()
{
    int n;
    cin >> n;
    dequy("", n);
    return 0;
}