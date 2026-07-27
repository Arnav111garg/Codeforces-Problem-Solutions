#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long d;
    if (cin >> n >> d) {
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && abs(a[i] - a[j]) <= d) {
                    count++;
                }
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