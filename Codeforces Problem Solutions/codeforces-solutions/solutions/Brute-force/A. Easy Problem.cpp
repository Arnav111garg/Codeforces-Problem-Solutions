#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    // The number of positive integer pairs (a, b) such that a + b = n is always n - 1
    cout << n - 1 << "\n";
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