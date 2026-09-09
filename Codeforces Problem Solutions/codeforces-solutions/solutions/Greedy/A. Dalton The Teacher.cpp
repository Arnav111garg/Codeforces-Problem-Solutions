#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int unhappy_count = 0;
    for (int i = 1; i <= n; ++i) {
        int p;
        cin >> p;
        if (p == i) {
            unhappy_count++;
        }
    }

    int ans = (unhappy_count + 1) / 2;
    cout << ans << "\n";
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