#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> a(10);
vector<bool> check(10);

void dequy(int n){
    if (n == N) {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 0; i <N; i++) {
        if(!check[i] ){
            a[n] = i+1;
            check[i] = true;
            dequy(n + 1); 
            check[i] = false;
        }
 

    }
}
int main(){
  cin >> N;
    dequy(0);
    return 0;
}