
#include<bits/stdc++.h>
using namespace std;
int a[100000];
// Cho dãy số nguyên a1, a2, ..., an. Hãy tìm số xuất hiện nhiều nhất trong dãy.
// Input
// Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^5)
// Dòng thứ 2 chứa n số nguyên a1, a2, ..., an (-10^9 ≤ ai ≤ 10^9)
// Output
// In ra số xuất hiện nhiều nhất trong dãy và số lần xuất hiện của nó. Nếu có nhiều số xuất hiện nhiều nhất thì in ra số nhỏ nhất.
int main()
{
    int n;
    map<int, int> mp;
    cout<<"Nhap n = ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i =0; i<n; i++){
        mp[a[i]]++;
    }
    int maxValue =0;
    int maxKey = 0;

    for(auto it = mp.begin(); it!=mp.end();it++){
        if (it->second > maxValue) {
            maxValue = it->second;
            maxKey = it->first;
        }
    }

    cout << maxKey << " " << maxValue;
    return 0;
}



