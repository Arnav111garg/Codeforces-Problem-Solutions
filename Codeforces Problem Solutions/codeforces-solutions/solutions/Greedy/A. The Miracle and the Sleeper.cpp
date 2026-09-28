#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long l, r;
    cin >> l >> r;
    
    long long optimal_b = r / 2 + 1;
    
    if (optimal_b >= l) {
        cout << r % optimal_b << "\n";
    } else {
        cout << r % l << "\n";
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