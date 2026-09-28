#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, B, x, y;
    cin >> n >> B >> x >> y;
    
    long long current = 0;
    long long total_sum = 0;
    
    for (int i = 1; i <= n; i++) {
        if (current + x <= B) {
            current += x;
        } else {
            current -= y;
        }
        total_sum += current;
    }
    
    cout << total_sum << "\n";
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