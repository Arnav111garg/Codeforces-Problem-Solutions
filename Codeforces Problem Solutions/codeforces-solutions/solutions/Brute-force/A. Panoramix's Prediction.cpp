#include <bits/stdc++.h>
using namespace std;

bool isPrime(int k) {
    if (k < 2) return false;
    for (int i = 2; i * i <= k; ++i) {
        if (k % i == 0) return false;
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    int next_prime = n + 1;
    while (!isPrime(next_prime)) {
        next_prime++;
    }
    
    if (next_prime == m) {
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