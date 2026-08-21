#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b;
    if (!(cin >> n >> a >> b)) return;

    for (long long x = 0; x * a <= n; ++x) {
        long long rem = n - x * a;
        if (rem % b == 0) {
            long long y = rem / b;
            cout << "YES\n";
            cout << x << " " << y << "\n";
            return;
        }
    }

    cout << "NO\n";
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