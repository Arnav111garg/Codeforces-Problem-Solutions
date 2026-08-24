#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, p;
    if (!(cin >> n >> k >> p)) return;

    int abs_k = abs(k);
    
    if (abs_k > n * p) {
        cout << -1 << "\n";
    } else {
        int ops = (abs_k + p - 1) / p;
        cout << ops << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}