#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    int wrong_even = 0, wrong_odd = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (i % 2 != a % 2) {
            if (i % 2 == 0) {
                wrong_even++;
            } else {
                wrong_odd++;
            }
        }
    }

    if (wrong_even == wrong_odd) {
        cout << wrong_even << "\n";
    } else {
        cout << -1 << "\n";
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