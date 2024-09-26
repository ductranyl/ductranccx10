#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
int N;

void dequy(int sum, int count) {
    if (sum == N) {
        for (int i = 0; i < count; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= N; i++) {
        if(sum+i<=N){
            a[count] = i; 
            dequy(sum + i,count+1); 
        }
    }
}

int main() {
    cin >> N;
    dequy(0,0);
    return 0;
}