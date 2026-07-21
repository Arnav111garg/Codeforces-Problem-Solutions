#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k2, k3, k5, k6;
    if (!(cin >> k2 >> k3 >> k5 >> k6)) return;
    
    long long count256 = min({k2, k5, k6});
    
    k2 -= count256;
    
    long long count32 = min(k2, k3);
    
    long long total_sum = (count256 * 256) + (count32 * 32);
    
    cout << total_sum << "\n";
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