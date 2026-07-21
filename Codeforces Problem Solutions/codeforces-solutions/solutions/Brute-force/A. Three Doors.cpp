#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    
    
    vector<int> keys(4);
    cin >> keys[1] >> keys[2] >> keys[3];
    
    int doors_opened = 0;
    
    
    while (x != 0) {
        doors_opened++;
        x = keys[x];
    }
    
    if (doors_opened == 3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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