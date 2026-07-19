#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int common_val = 0;
    if (a[0] == a[1]) {
        common_val = a[0];
    } else {
        common_val = a[2];
    }
    
    for (int i = 0; i < n; ++i) {
        if (a[i] != common_val) {
            cout << i + 1 << "\n";
            return;
        }
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