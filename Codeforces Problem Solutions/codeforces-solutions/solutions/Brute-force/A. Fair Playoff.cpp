#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int win1 = max(s1, s2);
    int lose1 = min(s1, s2);

    int win2 = max(s3, s4);
    int lose2 = min(s3, s4);

    if (win1 < lose2 || win2 < lose1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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