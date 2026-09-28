#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> count(n + 1, 0);
    int pairs = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        count[a]++;
        if (count[a] == 2) {
            pairs++;
        }
    }
    
    cout << pairs << "\n";
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