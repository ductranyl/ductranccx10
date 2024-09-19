#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
int N,k;

void dequy(int n, int count) {
    if (n == k) {
        for (int i = 0; i < k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = count; i <= N; i++) {
        a[n] = i; 
        dequy(n + 1,i+1); 

    }
}

int main() {
    cin >> N;
    cin >> k;
    dequy(0,1);
    return 0;
}