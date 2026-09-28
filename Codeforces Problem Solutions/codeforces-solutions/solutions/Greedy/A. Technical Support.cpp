#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int unanswered = 0;
    for (char c : s) {
        if (c == 'Q') {
            unanswered++;
        } else if (c == 'A') {
            unanswered = max(0, unanswered - 1);
        }
    }
    
    if (unanswered == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // Enabled for multiple test cases
    while (t--) {
        solve();
    }

    return 0;
}