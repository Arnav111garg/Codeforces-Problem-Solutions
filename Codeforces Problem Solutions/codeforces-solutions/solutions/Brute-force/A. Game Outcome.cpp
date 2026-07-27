#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        vector<vector<int>> grid(n, vector<int>(n));
        vector<int> row_sum(n, 0);
        vector<int> col_sum(n, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
                row_sum[i] += grid[i][j];
                col_sum[j] += grid[i][j];
            }
        }

        int winning_count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (col_sum[j] > row_sum[i]) {
                    winning_count++;
                }
            }
        }

        cout << winning_count << "\n";
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