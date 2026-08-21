#include <bits/stdc++.h>
using namespace std;

void solve() {
    int p1, p2, p3, p4, a, b;
    if (!(cin >> p1 >> p2 >> p3 >> p4 >> a >> b)) return;

    int min_p = min({p1, p2, p3, p4});

    int count = 0;
    for (int x = a; x <= b; ++x) {
        if (x < min_p) {
            count++;
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}