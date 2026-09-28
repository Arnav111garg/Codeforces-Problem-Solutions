#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 0 << "\n";
    } else if (n == 2) {
        cout << 1 << "\n";
    } else if (n == 3 || n % 2 == 0) {
        cout << 2 << "\n";
    } else {
        cout << 3 << "\n";
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