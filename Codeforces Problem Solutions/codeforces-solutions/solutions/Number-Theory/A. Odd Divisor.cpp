#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;


    if ((n & (n - 1)) == 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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