#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
int N;

void dequy(int n, int count) {
    if (n == N) {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = count; i <= 3; i++) {
        a[n] = i; 
        dequy(n + 1,i); 

    }
}

int main() {
    cin >> N;
    dequy(0,1);
    return 0;
}