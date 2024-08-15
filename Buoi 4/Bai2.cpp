
#include<bits/stdc++.h>
using namespace std;
int a[100000];
// Cho 1 mang so nguyen va 1 so nguyen k.
// Dem cap so i va j sao cho i<j va a[i] + a[j] chia het cho k
int main()
{
   int n,k;
   cout<<"Nhap n = ";
   cin>>n;
   cout<<"Nhap k = ";
   cin>>k;

    for(int i=0; i<n; i++){
         cin>>a[i];
    }

    for (int i = 0; i < n; i++){
        a[i]= a[i]%k;
    }
  
    map<int, int> mp;
    int ans =0;
    for(int i =0; i<n; i++){
        mp[a[i]]++;
    }
    for(auto it = mp.begin(); it!=mp.end();it++){
        if(it->first == 0){
            ans += it->second*(it->second-1)/2;
        }
        else if((it->first<k-it->first)){ 
                ans += mp[it->first]*mp[k-it->first];
        }
    }
    cout<<ans;
    return 0;
}



