#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long ans = 0;
    
    for (int i = 0; i < n / 2; ++i) {
        long long diff = abs(a[i] - a[n - 1 - i]);
        ans = std::__gcd(ans, diff);
    }

    cout << ans << "\n";
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