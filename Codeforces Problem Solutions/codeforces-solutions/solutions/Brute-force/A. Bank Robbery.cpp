#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    if (cin >> a >> b >> c) {
        int n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (x > b && x < c) {
                count++;
            }
        }

        cout << count << "\n";
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