#include <bits/stdc++.h>
using namespace std;

bool isValidK(long long target_x, long long dx, long long target_y, long long dy) {
    long long k = -1;

    if (dx != 0) {
        if (target_x % dx != 0) return false;
        k = target_x / dx;
        if (k < 0) return false;
    } else {
        if (target_x != 0) return false;
    }

    if (dy != 0) {
        if (target_y % dy != 0) return false;
        long long ky = target_y / dy;
        if (ky < 0) return false;
        if (k != -1 && k != ky) return false;
        k = ky;
    } else {
        if (target_y != 0) return false;
    }

    return k >= 0;
}

void solve() {
    int n;
    long long a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    long long dx = 0, dy = 0;
    for (char c : s) {
        if (c == 'N') dy++;
        else if (c == 'E') dx++;
        else if (c == 'S') dy--;
        else if (c == 'W') dx--;
    }

    long long cur_x = 0, cur_y = 0;
    
    if (isValidK(a - cur_x, dx, b - cur_y, dy)) {
        cout << "YES\n";
        return;
    }

    for (char c : s) {
        if (c == 'N') cur_y++;
        else if (c == 'E') cur_x++;
        else if (c == 'S') cur_y--;
        else if (c == 'W') cur_x--;

        if (isValidK(a - cur_x, dx, b - cur_y, dy)) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}