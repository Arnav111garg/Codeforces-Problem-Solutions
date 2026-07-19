#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
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