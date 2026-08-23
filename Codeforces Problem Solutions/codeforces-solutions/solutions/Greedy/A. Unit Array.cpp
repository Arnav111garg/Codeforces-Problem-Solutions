#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    int neg_count = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == -1) {
            neg_count++;
        }
    }

    int ops = 0;
    if (neg_count > n / 2) {
        ops += (neg_count - n / 2);
        neg_count = n / 2;
    }

    if (neg_count % 2 != 0) {
        ops++;
    }

    cout << ops << "\n";
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