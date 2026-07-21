#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, c;
    if (!(cin >> r >> c)) return;
    
    vector<string> grid(r);
    for (int i = 0; i < r; i++) {
        cin >> grid[i];
    }
    
    int r_safe = 0;
    for (int i = 0; i < r; i++) {
        bool has_s = false;
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == 'S') {
                has_s = true;
                break;
            }
        }
        if (!has_s) r_safe++;
    }
    
    int c_safe = 0;
    for (int j = 0; j < c; j++) {
        bool has_s = false;
        for (int i = 0; i < r; i++) {
            if (grid[i][j] == 'S') {
                has_s = true;
                break;
            }
        }
        if (!has_s) c_safe++;
    }
    
    int ans = (r_safe * c) + (c_safe * (r - r_safe));
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}