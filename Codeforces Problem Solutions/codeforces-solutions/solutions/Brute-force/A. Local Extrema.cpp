#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int extrema_count = 0;


        for (int i = 1; i < n - 1; i++) {
            if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || 
                (a[i] < a[i - 1] && a[i] < a[i + 1])) {
                extrema_count++;
            }
        }

        cout << extrema_count << "\n";
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