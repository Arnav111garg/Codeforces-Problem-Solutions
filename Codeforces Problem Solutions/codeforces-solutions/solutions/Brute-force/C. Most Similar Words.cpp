#include <bits/stdc++.h>
using namespace std;

int get_diff(const string& s1, const string& s2, int m) {
    int diff = 0;
    for (int k = 0; k < m; k++) {
        diff += abs(s1[k] - s2[k]);
    }
    return diff;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int min_diff = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            min_diff = min(min_diff, get_diff(s[i], s[j], m));
        }
    }
    
    cout << min_diff << "\n";
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