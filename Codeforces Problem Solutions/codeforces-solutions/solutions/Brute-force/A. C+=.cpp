#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, n;
    cin >> a >> b >> n;

    int operations = 0;
    while (a <= n && b <= n) {
        if (a < b) {
            a += b;
        } else {
            b += a;
        }
        operations++;
    }

    cout << operations << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}