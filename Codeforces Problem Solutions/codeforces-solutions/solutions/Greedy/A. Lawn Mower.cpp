#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, w;
    cin >> n >> w;
    
    long long kept = n / w;
    
    cout << n - kept << "\n";
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