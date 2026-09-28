#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    
    sort(g.begin(), g.end());
    
    long long total_emeralds = 0;
    for (int i = n - 1; i >= 0; i -= 2) {
        total_emeralds += g[i];
    }
    
    cout << total_emeralds << "\n";
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