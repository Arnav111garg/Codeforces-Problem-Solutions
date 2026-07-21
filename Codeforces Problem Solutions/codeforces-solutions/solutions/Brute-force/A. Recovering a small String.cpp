#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int c1 = max(1, n - 52);
    int c2 = max(1, (n - c1) - 26);
    int c3 = n - c1 - c2;
    
    char char1 = 'a' + c1 - 1;
    char char2 = 'a' + c2 - 1;
    char char3 = 'a' + c3 - 1;
    
    cout << char1 << char2 << char3 << "\n";
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