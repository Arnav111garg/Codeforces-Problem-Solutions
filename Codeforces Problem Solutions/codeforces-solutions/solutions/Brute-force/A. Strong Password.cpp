#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int n = s.length();
    bool inserted = false;
    
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            char fill = (s[i] == 'a' ? 'b' : 'a');
            s.insert(i + 1, 1, fill);
            inserted = true;
            break;
        }
    }
    
    if (!inserted) {
        char fill = (s[0] == 'a' ? 'b' : 'a');
        s = fill + s;
    }
    
    cout << s << "\n";
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