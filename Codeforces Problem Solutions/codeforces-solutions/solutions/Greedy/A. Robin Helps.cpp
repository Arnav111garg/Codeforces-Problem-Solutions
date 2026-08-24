#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    int current_gold = 0;
    int helped = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a >= k) {
            current_gold += a;
        } else if (a == 0 && current_gold > 0) {
            current_gold--;
            helped++;
        }
    }

    cout << helped << "\n";
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