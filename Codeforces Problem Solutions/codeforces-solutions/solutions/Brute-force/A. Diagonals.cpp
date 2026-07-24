#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (k == 0) {
        cout << 0 << "\n";
        return;
    }

    vector<int> capacities;
    capacities.push_back(n);
    for (int len = n - 1; len >= 1; len--) {
        capacities.push_back(len);
        capacities.push_back(len);
    }

    int diagonals_used = 0;
    for (int cap : capacities) {
        if (k <= 0) break;
        k -= cap;
        diagonals_used++;
    }

    cout << diagonals_used << "\n";
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