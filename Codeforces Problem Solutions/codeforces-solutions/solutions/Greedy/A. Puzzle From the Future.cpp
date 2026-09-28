#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string b;
    cin >> b;
    
    string a = "";
    int last_c = -1; 
    
    for (int i = 0; i < n; i++) {
        int b_val = b[i] - '0';
        
        if (b_val + 1 != last_c) {
            a += '1';
            last_c = b_val + 1;
        } else {
            a += '0';
            last_c = b_val;
        }
    }
    
    cout << a << "\n";
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