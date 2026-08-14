#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> lucky_numbers = {
        4, 7, 
        44, 47, 74, 77, 
        444, 447, 474, 477, 744, 747, 774, 777
    };

    bool is_almost_lucky = false;
    for (int lucky : lucky_numbers) {
        if (n % lucky == 0) {
            is_almost_lucky = true;
            break;
        }
    }

    if (is_almost_lucky) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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