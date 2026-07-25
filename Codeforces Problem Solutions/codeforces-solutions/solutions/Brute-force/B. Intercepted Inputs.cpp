#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;

    vector<int> a(k);
    unordered_map<int, int> freq;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int target = k - 2;

    for (int x : a) {
        if (target % x == 0) {
            int y = target / x;

            if (x == y && freq[x] >= 2) {
                cout << x << " " << y << "\n";
                return;
            } else if (x != y && freq.count(y)) {
                cout << x << " " << y << "\n";
                return;
            }
        }
    }
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