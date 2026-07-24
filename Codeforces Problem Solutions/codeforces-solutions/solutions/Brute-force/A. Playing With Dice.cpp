#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    if (cin >> a >> b) {
        int win_a = 0, draw = 0, win_b = 0;

        for (int x = 1; x <= 6; x++) {
            int diff_a = abs(a - x);
            int diff_b = abs(b - x);

            if (diff_a < diff_b) {
                win_a++;
            } else if (diff_a == diff_b) {
                draw++;
            } else {
                win_b++;
            }
        }

        cout << win_a << " " << draw << " " << win_b << "\n";
    }

    return 0;
}