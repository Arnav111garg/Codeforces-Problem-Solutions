#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 4; j++) {
            if (s[j] == '#') {
                ans[i] = j + 1;
                break;
            }
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << ans[i] << (i == 0 ? "" : " ");
    }
    cout << "\n";
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