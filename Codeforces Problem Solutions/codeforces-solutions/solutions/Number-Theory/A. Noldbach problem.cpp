#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }

    int count = 0;
    for (size_t i = 0; i + 1 < primes.size(); i++) {
        int sum = primes[i] + primes[i + 1] + 1;
        if (sum <= n && is_prime(sum)) {
            count++;
        }
    }

    if (count >= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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