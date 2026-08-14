#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int g = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        g = std::__gcd(g, a[i]);
    }

    int max_val = a[n - 1];
    cout << max_val / g << "\n";
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