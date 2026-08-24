#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    if (!(cin >> x >> y)) return;

    int screens = (y + 1) / 2;

    int empty_slots = screens * 15 - y * 4;

    if (x > empty_slots) {
        int remaining_x = x - empty_slots;
        screens += (remaining_x + 14) / 15;
    }

    cout << screens << "\n";
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