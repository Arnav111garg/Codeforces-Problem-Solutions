#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    if (!(cin >> n)) return;

    long long ans = 0;
    
    while (n > 1) {
        ans += n;
        long long smallest_factor = n;
        
        for (long long i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                smallest_factor = i;
                break;
            }
        }
        
        n /= smallest_factor;
    }
    
    ans += 1;
    
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