#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (!isPrime(sum)) {
        cout << n << "\n";
        for (int i = 1; i <= n; i++) {
            cout << i << (i == n ? "" : " ");
        }
        cout << "\n";
    } else {
        int exclude_idx = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                exclude_idx = i + 1; 
                break;
            }
        }

        cout << n - 1 << "\n";
        bool first = true;
        for (int i = 1; i <= n; i++) {
            if (i == exclude_idx) continue;
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
        cout << "\n";
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