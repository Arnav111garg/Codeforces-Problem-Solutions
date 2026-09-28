#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    int total_distance = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        total_distance += a;
    }
    
    cout << max(0, total_distance - m) << "\n";
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