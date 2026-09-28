#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    bool found_neg_neg = false;
    bool found_neg_pos = false;
    
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == -1 && a[i + 1] == -1) {
            found_neg_neg = true;
        } else if (a[i] != a[i + 1]) {
            found_neg_pos = true;
        }
    }
    
    if (found_neg_neg) {
        cout << total_sum + 4 << "\n";
    } else if (found_neg_pos) {
        cout << total_sum << "\n";
    } else {
        cout << total_sum - 4 << "\n";
    }
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