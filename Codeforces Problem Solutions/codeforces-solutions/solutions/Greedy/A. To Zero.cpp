#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (n % 2 == 0) {
        long long even_step = k - 1;
        long long ops = (n + even_step - 1) / even_step;
        cout << ops << "\n";
    } else {
        long long even_step = k - 1;
        long long rem = n - k;
        long long ops = 1 + (rem + even_step - 1) / even_step;
        cout << ops << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}