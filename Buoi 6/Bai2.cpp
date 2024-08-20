
#include <bits/stdc++.h>
using namespace std;
long long a[1000000];
// In ra cac so tang dan deu khong vuot qua n


int main() {
    long long n;
    int count = 0;
    cout << "nhap n= ";
    cin >> n;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            long long number = i;
            long long nextNumber = i+ j;

            while (nextNumber <= 9) {
                number = number * 10 + nextNumber;

                if (number > n) {
                    break;
                }
                a[count] = number;
                count++;
                nextNumber += j;
            }
        }
    }
    sort(a, a + count);
    for (int i = 1; i < 10; i++) {
        cout << i << " ";
    }
    for (int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
