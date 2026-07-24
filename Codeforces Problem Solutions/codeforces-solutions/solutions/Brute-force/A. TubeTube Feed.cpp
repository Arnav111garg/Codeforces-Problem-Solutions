#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int max_ent = -1;
    int best_idx = -1;

    for (int i = 0; i < n; i++) {
        int time_needed = a[i] + i;
        if (time_needed <= t) {
            if (b[i] > max_ent) {
                max_ent = b[i];
                best_idx = i + 1; 
            }
        }
    }

    cout << best_idx << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--) {
        solve();
    }

    return 0;
}