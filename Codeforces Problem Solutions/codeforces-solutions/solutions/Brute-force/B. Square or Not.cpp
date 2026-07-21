#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int k = round(sqrt(n));
    if (k * k != n) {
        cout << "No\n";
        return;
    }
    
    int ones = 0;
    for (char c : s) {
        if (c == '1') ones++;
    }
    
    if (ones == 4 * k - 4) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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