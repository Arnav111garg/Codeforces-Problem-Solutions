#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        
        int diff = abs(H - h);
        
        if (diff % k == 0) {
            int step_diff = diff / k;
            if (step_diff >= 1 && step_diff <= m - 1) {
                ans++;
            }
        }
    }
    
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