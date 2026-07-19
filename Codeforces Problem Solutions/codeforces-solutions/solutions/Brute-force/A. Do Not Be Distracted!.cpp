#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_set<char> visited;
    
    visited.insert(s[0]);

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            if (visited.count(s[i])) {
                cout << "NO\n";
                return;
            }
            visited.insert(s[i]);
        }
    }

    cout << "YES\n";
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