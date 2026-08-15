#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> max_idx(1001, 0);
    
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        max_idx[x] = i;
    }

    int max_sum = -1;

    for (int i = 1; i <= 1000; ++i) {
        if (max_idx[i] == 0) continue; 
        
        for (int j = i; j <= 1000; ++j) {
            if (max_idx[j] == 0) continue; 
            
            if (std::__gcd(i, j) == 1) {
                max_sum = max(max_sum, max_idx[i] + max_idx[j]);
            }
        }
    }

    cout << max_sum << "\n";
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