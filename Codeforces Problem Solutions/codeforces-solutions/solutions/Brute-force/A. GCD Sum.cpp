#include <bits/stdc++.h>
using namespace std;

long long get_digit_sum(long long x) {
    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void solve() {
    long long n;
    cin >> n;

    while (true) {
        long long sum = get_digit_sum(n);
        if (__gcd(n, sum) > 1) {
            cout << n << "\n";
            return;
        }
        n++;
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