#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    
    int m;
    cin >> m;
    string b, c;
    cin >> b >> c;
    
    for (int i = 0; i < m; i++) {
        if (c[i] == 'V') {
            a = b[i] + a;
        } else {
            a = a + b[i];
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