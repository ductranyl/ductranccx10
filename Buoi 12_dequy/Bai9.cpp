#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
vector<bool> check(10);
int N;

void dequy(int sum, int count, int index) {
    if (sum == N) {
        for (int i = 0; i < count; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = index; i <= N; i++) {
        if(sum+i<=N){
            a[count] = i; 
            dequy(sum + i,count+1,i); 
        }
     
    }
}

int main() {
    cin >> N;
    dequy(0,0,1);
    return 0;
}