#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        vector<pair<long long, int>> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }

        sort(arr.begin(), arr.end());

        if (n > 1 && arr[0].first == arr[1].first) {
            cout << "Still Rozdil\n";
        } else {
            cout << arr[0].second << "\n";
        }
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