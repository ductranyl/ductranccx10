#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
vector<int> fib;
int N;
void arrFib(int n)
{
    fib.push_back(1);
    fib.push_back(2);
    int nextFib = 3;
    while (nextFib <= n)
    {
        fib.push_back(nextFib);
        int size = fib.size();
        nextFib = fib[size - 1] + fib[size - 2];
    }
}
void dequy(int sum, int count)
{
    if (sum == N)
    {
        for (int i = 0; i < count; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 0; i <= fib.size()-1; i++)
    {
        if (sum + fib[i] <= N)
        {
            a[count] = fib[i];
            dequy(sum + fib[i], count + 1);
        }
    }
}

int main()
{
    cin >> N;
    arrFib(N);
    dequy(0, 0);
    return 0;
}