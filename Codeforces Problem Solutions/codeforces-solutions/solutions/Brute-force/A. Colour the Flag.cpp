#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    bool ok1 = true; 
    bool ok2 = true; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] != '.') {
                char char_p1 = ((i + j) % 2 == 0) ? 'R' : 'W';
                char char_p2 = ((i + j) % 2 == 0) ? 'W' : 'R';

                if (grid[i][j] != char_p1) ok1 = false;
                if (grid[i][j] != char_p2) ok2 = false;
            }
        }
    }

    if (ok1) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << (((i + j) % 2 == 0) ? 'R' : 'W');
            }
            cout << "\n";
        }
    } else if (ok2) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << (((i + j) % 2 == 0) ? 'W' : 'R');
            }
            cout << "\n";
        }
    } else {
        cout << "NO\n";
    }
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