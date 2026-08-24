#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long m, a, b, c;
    if (!(cin >> m >> a >> b >> c)) return;

    long long row1_seated = min(m, a);
    long long row2_seated = min(m, b);

    long long remaining_seats = (m - row1_seated) + (m - row2_seated);
    long long c_seated = min(remaining_seats, c);

    long long total_seated = row1_seated + row2_seated + c_seated;

    cout << total_seated << "\n";
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