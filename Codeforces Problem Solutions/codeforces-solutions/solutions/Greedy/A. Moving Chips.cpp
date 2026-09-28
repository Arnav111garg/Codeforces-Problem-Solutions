#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int first_one = -1, last_one = -1;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            if (first_one == -1) {
                first_one = i;
            }
            last_one = i;
        }
    }
    
    int zeros_between = 0;
    for (int i = first_one; i <= last_one; i++) {
        if (a[i] == 0) {
            zeros_between++;
        }
    }
    
    cout << zeros_between << "\n";
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