#include <bits/stdc++.h>
using namespace std;

int teamToan[1000000];  // Mảng lưu đội Toán
int teamTin[1000000];   // Mảng lưu đội Tin
int ans[1000000];       // Mảng lưu các phần tử chung

int main() {
    int n, m;
    cin >> n >> m;

    set<int> teamToanSet;  // Sử dụng set để lưu các phần tử của đội Toán
    int count = 0;         // Đếm số lượng phần tử chung
    bool isCheck = false;

    // Nhập mảng teamTin
    for (int i = 0; i < n; i++) {
        cin >> teamTin[i];
    }

    // Nhập mảng teamToan và thêm vào set
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        teamToanSet.insert(x);  // Chèn phần tử vào set
    }

    // Kiểm tra phần tử chung giữa teamTin và teamToan
    for (int i = 0; i < n; i++) {
        if (teamToanSet.count(teamTin[i])) {  // Kiểm tra xem teamTin[i] có trong set không
            ans[count++] = teamTin[i];
            isCheck = true;
        }
    }

    // In ra kết quả
    if (!isCheck) {
        cout << -1;
    } else {
        sort(ans, ans + count);  // Sắp xếp các phần tử chung theo thứ tự tăng dần
        for (int i = 0; i < count; i++) {
            cout << ans[i] << " ";  // In ra từng phần tử
        }
    }

    return 0;
}