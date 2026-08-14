#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0 && (x / i) <= n) {
            count++;
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}