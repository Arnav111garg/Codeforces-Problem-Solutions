#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y, z;
    cin >> n >> x >> y >> z;

    // Option 1: No AI
    long long time_no_ai = (n + x + y - 1) / (x + y);

    // Option 2: With AI
    long long time_with_ai;
    if (n <= z * x) {
        // Finished before or right when AI setup completes
        time_with_ai = (n + x - 1) / x;
    } else {
        // Finished after AI setup completes
        long long remaining_lines = n - z * x;
        time_with_ai = z + (remaining_lines + x + 10 * y - 1) / (x + 10 * y);
    }

    cout << min(time_no_ai, time_with_ai) << "\n";
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