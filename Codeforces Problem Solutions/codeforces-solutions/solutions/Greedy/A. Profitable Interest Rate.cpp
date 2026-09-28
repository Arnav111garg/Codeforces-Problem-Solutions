#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    
    if (a >= b) {
        cout << a << "\n";
    } 
    else {
        long long remaining = 2 * a - b;
        cout << max(0LL, remaining) << "\n";
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