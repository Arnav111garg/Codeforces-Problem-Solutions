#include <bits/stdc++.h>
using namespace std;

void solve() {
    string row1, row2;
    cin >> row1 >> row2;

    set<char> colors;
    for (char c : row1) colors.insert(c);
    for (char c : row2) colors.insert(c);

    cout << colors.size() - 1 << "\n";
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