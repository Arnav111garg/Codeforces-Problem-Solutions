#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;
    
    string s;
    cin >> s;
    
    int max_minutes = 0;
    int current_p_count = 0;
    bool found_first_a = false;
    
    for (char c : s) {
        if (c == 'A') {
            found_first_a = true;
            current_p_count = 0;
        } else if (found_first_a) {
            current_p_count++;
            max_minutes = max(max_minutes, current_p_count);
        }
    }
    
    cout << max_minutes << "\n";
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