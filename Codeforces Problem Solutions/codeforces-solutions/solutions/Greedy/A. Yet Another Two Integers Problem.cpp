#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    if (!(cin >> a >> b)) return;

    long long diff = abs(a - b);
    
    long long moves = (diff + 9) / 10;

    cout << moves << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}