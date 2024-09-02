#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int dp[1000][1000];
int b[1000][1000];  
/* 
    0 1 2 3
0   1 3 5 1
1   2 4 3 5
2   3 2 5 6
3   4 7 8 9
ductran
dp[0][1] = dp[0][0] + a[0][1]= 1+3 = 4
dp[1][0] = dp[0][0]+ a[1][0] = 1+2 =3
dp[0][2] = dp[0][1] + a[0][2] = 4+2=6
dp[1][1] = dp[0][1] + a[1][1]=4+4 = 8
dp[2][1] = dp[1][1] + a[2][1] =8+2= 10
dp[1][2] = dp[1][1] +a[1][2]=8+ 3 = 11
dp[2][2] = dp[1][2] +a[2][2]=11+ 5 = 16

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
    dp[0][0] = a[0][0];
    dp[1][0] = dp[0][0] + a[1][0];
    dp[0][1] = dp[0][0] + a[0][1];
    b[0][0] = -1;
    b[1][0] = 0;
    b[0][1] = 0;

    for(int i = 1; i<n; i++){
        for(int j =1;j<m; j++){
            /* 
            i=1

            j=1
            dp[0][1] = dp[0][0] + a[0][1] = 1+3 = 4
            dp[1][0] = dp[0][0] + a[1][0] = 1+2 = 3
            dp[0][1] > dp[1][0] => dp[1][1] = dp[0][1] + a[1][1] = 4+4 = 8
            j =2 
            dp[0][2] = dp[0][1] + a[0][2] = 4+2 = 6
            dp[[1][1]=8
            dp[0][2] < dp[1][1] => dp[1][2] = dp[1][1] + a[1][2] = 8+3 = 11
            
            i=2
            j=1
            dp[1][1] = 8
            dp[2][0] = dp[1][0] + a[2][0] = 3+3 = 6
            dp[1][1] > dp[2][0] => dp[2][1] = dp[1][1] + a[2][1] = 8+2 = 10
            j=2
            dp[1][2] = 11
            dp[2][1] = 10
            dp[1][2] > dp[2][1] => dp[2][2] = dp[1][2] + a[2][2] = 11+5 = 16

             */
                if(dp[i-1][j] > dp[i][j-1]){
                    dp[i][j] = dp[i-1][j] + a[i][j];
                    b[i][j] = i-1;
                }else{
                   dp[i][j] = dp[i][j-1] + a[i][j];
                     b[i][j] = j-1;
                }
            
        }
    }
    int maxV = dp[0][0];
    int maxIndexI = 0;
    int maxIndexJ = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(dp[i][j] > maxV){
                maxV = dp[i][j];
                maxIndexI = i;
                maxIndexJ = j;
            }
        }
    } 
    vector<int> res;
    int x = maxIndexI;
    int y = maxIndexJ;
    res.push_back(a[x][y]);

    while(b[x][y]!= -1){
        if(x == b[x][y]){
            y--;
        }else{
            x--;
        }
        res.push_back(a[x][y]);
    }
    for(int i = res.size()-1; i>=0; i--){
        cout<<res[i]<<" ";
    }      
    return 0;
}