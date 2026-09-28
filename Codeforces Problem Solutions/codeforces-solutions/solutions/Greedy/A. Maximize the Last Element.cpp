#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int max_val = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i % 2 == 0) {
            max_val = max(max_val, a[i]);
        }
    }
    
    cout << max_val << "\n";
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