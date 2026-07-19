#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    for (int i = 0; i < 5; i++) {
        sort(arr.begin(), arr.end());
        arr[0]++;
    }

    long long max_bananas = 1LL * arr[0] * arr[1] * arr[2];
    cout << max_bananas << "\n";
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