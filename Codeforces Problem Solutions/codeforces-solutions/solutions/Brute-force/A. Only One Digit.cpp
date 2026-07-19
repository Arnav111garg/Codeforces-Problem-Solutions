#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;

    char min_digit = *min_element(x.begin(), x.end());

    cout << min_digit << "\n";
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