#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    
    while (a > 0 && b > 0) {
        cout << "01";
        a--;
        b--;
    }
    
    while (a > 0) {
        cout << '0';
        a--;
    }
    
    while (b > 0) {
        cout << '1';
        b--;
    }
    
    cout << "\n";
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