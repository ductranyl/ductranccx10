
#include <bits/stdc++.h>
using namespace std;
int a[100000];
// Cho một mảng số nguyên, Đếm số cặp số i và j sao cho i < j và a[i] + a[j] chia hết cho 3.
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] % 3;
    }
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int ans = 0;
    ans = mp[0] * (mp[0] - 1) / 2 + mp[1] * mp[2];
    cout<<ans;
    return 0;
}
