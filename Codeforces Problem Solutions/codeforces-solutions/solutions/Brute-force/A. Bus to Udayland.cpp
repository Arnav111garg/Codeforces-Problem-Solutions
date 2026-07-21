#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<string> grid(n);
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        
        if (!found) {
            if (grid[i][0] == 'O' && grid[i][1] == 'O') {
                grid[i][0] = '+';
                grid[i][1] = '+';
                found = true;
            } else if (grid[i][3] == 'O' && grid[i][4] == 'O') {
                grid[i][3] = '+';
                grid[i][4] = '+';
                found = true;
            }
        }
    }
    
    if (found) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            cout << grid[i] << "\n";
        }
    } else {
        cout << "NO\n";
    }
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