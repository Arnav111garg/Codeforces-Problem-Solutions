#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int original_xor_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        original_xor_sum ^= a[i];
    }

    if (n % 2 != 0) {
        cout << original_xor_sum << "\n";
    } else {
        if (original_xor_sum == 0) {
            cout << 0 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
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