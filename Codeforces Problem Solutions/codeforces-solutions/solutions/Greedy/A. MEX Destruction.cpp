#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int first_nonzero = -1, last_nonzero = -1;
    int nonzero_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != 0) {
            if (first_nonzero == -1) first_nonzero = i;
            last_nonzero = i;
            nonzero_count++;
        }
    }
    
    if (nonzero_count == 0) {
        cout << 0 << "\n";
        return;
    }
    
    bool contiguous = true;
    for (int i = first_nonzero; i <= last_nonzero; i++) {
        if (a[i] == 0) {
            contiguous = false;
            break;
        }
    }
    
    if (contiguous) {
        cout << 1 << "\n";
    } 
    else {
        cout << 2 << "\n";
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