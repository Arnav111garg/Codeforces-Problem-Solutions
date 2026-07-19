#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, n;
    cin >> x >> n;

    // If the number of elements is even, every x cancels out with a -x
    if (n % 2 == 0) {
        cout << 0 << "\n";
    } else {
        // If odd, one extra x remains uncanceled at the end
        cout << x << "\n";
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