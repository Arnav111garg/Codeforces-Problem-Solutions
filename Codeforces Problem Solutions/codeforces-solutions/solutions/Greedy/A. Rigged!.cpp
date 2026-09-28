#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long s1, e1;
    cin >> s1 >> e1;
    
    bool possible = true;
    
    for (int i = 2; i <= n; i++) {
        long long s, e;
        cin >> s >> e;
        
        if (s >= s1 && e >= e1) {
            possible = false;
        }
    }
    
    if (possible) {
        cout << s1 << "\n";
    } else {
        cout << -1 << "\n";
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