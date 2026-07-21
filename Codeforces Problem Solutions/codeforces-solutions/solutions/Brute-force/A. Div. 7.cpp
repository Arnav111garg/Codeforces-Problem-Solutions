#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 7 == 0) {
        cout << n << "\n";
        return;
    }
    
    int base = n - (n % 10);
    for (int d = 0; d <= 9; d++) {
        if ((base + d) % 7 == 0) {
            cout << base + d << "\n";
            return;
        }
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