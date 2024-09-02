#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int dp[1000][1000];
int b[1000][1000];  
/* 
   
 */
int main(){
    int n;
    cout << "nhap n= ";
    cin >> n;
    int m;
    cout << "nhap m= "; 
    cin >> m;
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }           
    }
   for(int i=0;i<n; i++){
    dp[i][0] = a[i][0];
    b[i][0] = -1;
   }


    for(int j = 1; j < m; j++) {
        for(int i = 0; i < n; i++) {
            int maxVal = dp[i][j-1]; 
            b[i][j] = i;
            
            if(i > 0 && dp[i-1][j-1] > maxVal) {  
                maxVal = dp[i-1][j-1];
                b[i][j] = i-1;
            }
            
            if(i < n-1 && dp[i+1][j-1] > maxVal) {  
                maxVal = dp[i+1][j-1];
                b[i][j] = i+1;
            }
            
            dp[i][j] = maxVal + a[i][j];
        }
    }
   
   cout<<dp[n-1][m-1]<<endl;
   
    vector<int> res;
    int x = n-1;
    int y = m-1;
    
    while(y >= 0) {
        res.push_back(a[x][y]);
        x = b[x][y];
        y--;
    }
    
  
    reverse(res.begin(), res.end());
    for(int val : res) {
        cout << val << " ";
    }
    return 0;
}