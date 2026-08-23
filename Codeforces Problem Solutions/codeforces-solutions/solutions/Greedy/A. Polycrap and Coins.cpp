#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    if (!(cin >> n)) return;

    long long c1 = n / 3;
    long long c2 = n / 3;

    int rem = n % 3;
    if (rem == 1) {
        c1++;
    } else if (rem == 2) {
        c2++;
    }

    cout << c1 << " " << c2 << "\n";
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