#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void solve() {
    long long n, m, z;
    if (cin >> n >> m >> z) {
        long long common_multiple = n / __gcd(n, m) * m;
        cout << z / common_multiple << "\n";
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