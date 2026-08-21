#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int diff = y - x;
    int d = 0;

    for (int k = n - 1; k >= 1; --k) {
        if (diff % k == 0) {
            d = diff / k;
            break;
        }
    }

    vector<int> ans;
    int curr = y;
    while (curr > 0 && (int)ans.size() < n) {
        ans.push_back(curr);
        curr -= d;
    }

    curr = y + d;
    while ((int)ans.size() < n) {
        ans.push_back(curr);
        curr += d;
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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