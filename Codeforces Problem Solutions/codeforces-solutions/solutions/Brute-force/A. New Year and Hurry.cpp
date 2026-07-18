#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int remaining_time = 240 - k;
    int problems_solved = 0;

    for (int i = 1; i <= n; ++i) {
        int time_needed = 5 * i;
        if (remaining_time >= time_needed) {
            remaining_time -= time_needed;
            problems_solved++;
        } else {
            break; 
        }
    }

    cout << problems_solved << "\n";
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