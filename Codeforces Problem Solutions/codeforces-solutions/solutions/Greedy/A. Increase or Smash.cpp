#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    set<int> unique_values;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        unique_values.insert(val);
    }
    
    int u = unique_values.size();
    cout << 2 * u - 1 << "\n";
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