#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long added = 0;
    
    for (int i = 1; i <= n; i++) {
        long long a_i;
        cin >> a_i;
        
        long long current_pos = i + added;
        if (a_i > current_pos) {
            added += (a_i - current_pos);
        }
    }
    
    cout << added << "\n";
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