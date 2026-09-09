#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int open_cnt = 0, close_cnt = 0;
    for (char c : s) {
        if (c == '(') open_cnt++;
        else close_cnt++;
    }

    if (open_cnt == close_cnt) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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