#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;

    
    while (left <= right && a[left] <= k) {
        left++;
    }

    
    while (left <= right && a[right] <= k) {
        right--;
    }

    
    int solved = left + (n - 1 - right);
    cout << solved << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}