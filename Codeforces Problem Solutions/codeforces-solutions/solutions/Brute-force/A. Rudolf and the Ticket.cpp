#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> c(m);
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }

    int valid_ways = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i] + c[j] <= k) {
                valid_ways++;
            }
        }
    }

    cout << valid_ways << "\n";
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