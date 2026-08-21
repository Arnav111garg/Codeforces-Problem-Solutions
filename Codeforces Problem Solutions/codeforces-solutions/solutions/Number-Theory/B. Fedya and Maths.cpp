#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;
    if (!(cin >> n)) return;

    int len = n.length();
    int last_two_digits = 0;

    if (len == 1) {
        last_two_digits = n[0] - '0';
    } else {
        last_two_digits = (n[len - 2] - '0') * 10 + (n[len - 1] - '0');
    }

    if (last_two_digits % 4 == 0) {
        cout << 4 << "\n";
    } else {
        cout << 0 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}