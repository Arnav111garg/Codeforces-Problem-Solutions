#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int ops = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (i <= k && x > k) {
            ops++;
        }
    }
    
    cout << ops << "\n";
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