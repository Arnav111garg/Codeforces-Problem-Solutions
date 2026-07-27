#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        unordered_set<int> fib;
        int f1 = 1, f2 = 1;
        fib.insert(f1);
        fib.insert(f2);

        while (f1 + f2 <= n) {
            int f3 = f1 + f2;
            fib.insert(f3);
            f1 = f2;
            f2 = f3;
        }
        string ans = "";
        for (int i = 1; i <= n; i++) {
            if (fib.count(i)) {
                ans += 'O';
            } else {
                ans += 'o';
            }
        }

        cout << ans << "\n";
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