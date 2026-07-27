#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        int a = (n - 1) / 2;
        int b = n - a;

        while (std::__gcd(a, b) != 1) {
            a--;
            b++;
        }

        cout << a << " " << b << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}