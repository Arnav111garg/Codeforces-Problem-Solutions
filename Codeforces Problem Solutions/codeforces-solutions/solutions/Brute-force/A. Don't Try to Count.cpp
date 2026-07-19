#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int operations = 0;
    while (operations <= 6) {
        if (x.find(s) != string::npos) {
            cout << operations << "\n";
            return;
        }
        x += x;
        operations++;
    }

    cout << -1 << "\n";
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