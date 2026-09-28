#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, S;
    cin >> n >> S;
    
    long long ans = (S + n - 1) / n;
    
    cout << ans << "\n";
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