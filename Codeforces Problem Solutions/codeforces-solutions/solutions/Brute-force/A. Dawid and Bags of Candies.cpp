#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(4);
    if (!(cin >> a[0] >> a[1] >> a[2] >> a[3])) return;

    sort(a.begin(), a.end());

    if (a[0] + a[3] == a[1] + a[2] || a[0] + a[1] + a[2] == a[3]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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