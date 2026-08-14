#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> prime_count(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        if (prime_count[i] == 0) {
            for (int j = i; j <= n; j += i) {
                prime_count[j]++;
            }
        }
    }

    int almost_prime_cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (prime_count[i] == 2) {
            almost_prime_cnt++;
        }
    }

    cout << almost_prime_cnt << "\n";
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