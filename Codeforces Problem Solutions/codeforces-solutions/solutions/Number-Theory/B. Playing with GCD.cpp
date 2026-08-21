#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a / std::__gcd(a, b)) * b;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> b(n + 1);
    b[0] = a[0];
    b[n] = a[n - 1];

    for (int i = 1; i < n; ++i) {
        b[i] = lcm(a[i - 1], a[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (std::__gcd(b[i], b[i + 1]) != a[i]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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