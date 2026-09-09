#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s;
    cin >> s;

    int k = 0;
    while (k * k < s) {
        k++;
    }

    cout << k << "\n";
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