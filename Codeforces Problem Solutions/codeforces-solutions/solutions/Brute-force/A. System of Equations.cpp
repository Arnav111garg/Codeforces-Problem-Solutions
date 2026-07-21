#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    int count = 0;
    
    for (int a = 0; a * a <= n; a++) {
        for (int b = 0; b * b <= m; b++) {
            if (a * a + b == n && a + b * b == m) {
                count++;
            }
        }
    }
    
    cout << count << "\n";
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