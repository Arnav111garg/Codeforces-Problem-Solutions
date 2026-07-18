#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    for (int i = 0; i < 3; ++i) {
        s[i] = tolower(s[i]);
    }


    if (s == "yes") {
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