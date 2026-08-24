#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        long long val;
        cin >> val;
        sum += val;
    }

    if (sum == n) {
        cout << 0 << "\n";
    } else if (sum < n) {
        cout << 1 << "\n";
    } else {
        cout << sum - n << "\n";
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