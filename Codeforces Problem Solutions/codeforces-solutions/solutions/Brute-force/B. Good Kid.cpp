#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    a[0]++;

    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= a[i];
    }

    cout << product << "\n";
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