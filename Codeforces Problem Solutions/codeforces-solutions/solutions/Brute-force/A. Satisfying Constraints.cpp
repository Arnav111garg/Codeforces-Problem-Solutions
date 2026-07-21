#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int L = 1;
    int R = 1e9;
    vector<int> not_equal;
    
    for (int i = 0; i < n; i++) {
        int a, x;
        cin >> a >> x;
        if (a == 1) {
            L = max(L, x);
        } else if (a == 2) {
            R = min(R, x);
        } else if (a == 3) {
            not_equal.push_back(x);
        }
    }
    
    if (L > R) {
        cout << 0 << "\n";
        return;
    }
    
    int total = R - L + 1;
    
    for (int x : not_equal) {
        if (x >= L && x <= R) {
            total--;
        }
    }
    
    cout << total << "\n";
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