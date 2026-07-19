#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> grid(3);
    int target_row = -1;

    for (int i = 0; i < 3; i++) {
        cin >> grid[i];
        if (grid[i].find('?') != string::npos) {
            target_row = i;
        }
    }

    map<char, int> counts;
    for (char c : grid[target_row]) {
        counts[c]++;
    }

    if (counts['A'] == 0) cout << "A\n";
    else if (counts['B'] == 0) cout << "B\n";
    else cout << "C\n";
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