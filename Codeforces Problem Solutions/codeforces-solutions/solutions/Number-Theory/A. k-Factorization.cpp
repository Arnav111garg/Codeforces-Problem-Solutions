#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    vector<int> factors;
    int temp = n;

    for (int d = 2; d * d <= temp; ++d) {
        while (temp % d == 0) {
            factors.push_back(d);
            temp /= d;
        }
    }
    if (temp > 1) {
        factors.push_back(temp);
    }

    if ((int)factors.size() < k) {
        cout << -1 << "\n";
        return;
    }

    for (int i = 0; i < k - 1; ++i) {
        cout << factors[i] << " ";
    }

    int last_factor = 1;
    for (int i = k - 1; i < (int)factors.size(); ++i) {
        last_factor *= factors[i];
    }
    cout << last_factor << "\n";
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