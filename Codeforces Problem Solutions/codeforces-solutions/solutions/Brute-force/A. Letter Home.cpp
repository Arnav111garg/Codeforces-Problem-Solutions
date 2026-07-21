#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    int L = min(s, x[0]);
    int R = max(s, x[n - 1]);
    
    int option1 = (s - L) + (R - L);
    
    int option2 = (R - s) + (R - L);
    
    cout << min(option1, option2) << "\n";
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