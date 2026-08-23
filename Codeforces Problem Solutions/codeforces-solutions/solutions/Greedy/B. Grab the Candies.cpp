#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    int sum_even = 0, sum_odd = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            sum_even += a;
        } else {
            sum_odd += a;
        }
    }

    if (sum_even > sum_odd) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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