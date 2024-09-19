#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
int N;

void dequy(int n){
    if (n == N) {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = n; i <N; i++) {
        swap(a[n],a[i]);
        dequy(n + 1); 
        swap(a[n],a[i]);

    }
}

int main() {
    cin >> N;
    for(int i = 0; i<N; i++){
        a[i] = i+1;
    }
    dequy(0);
    return 0;
}