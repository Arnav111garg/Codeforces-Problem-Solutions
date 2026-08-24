#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    long long sum1 = (1LL << n); 
    for (int i = 1; i < n / 2; ++i) {
        sum1 += (1LL << i); 
    }

    long long sum2 = 0;
    for (int i = n / 2; i < n; ++i) {
        sum2 += (1LL << i);   
    }

    cout << sum1 - sum2 << "\n";
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