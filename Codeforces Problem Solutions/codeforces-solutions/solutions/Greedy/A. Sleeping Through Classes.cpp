#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    int awake_until = -1;
    int sleep_count = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            awake_until = max(awake_until, i + k);
        } else {
            if (i > awake_until) {
                sleep_count++;
            }
        }
    }
    
    cout << sleep_count << "\n";
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