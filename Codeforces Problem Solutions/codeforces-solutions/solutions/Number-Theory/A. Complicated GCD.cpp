#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string a, b;
    cin >> a >> b;
 
    if (a == b) {
        cout << a << "\n";
    } else {
        cout << "1\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    while (t--) {
        solve();
    }
 
    return 0;
}