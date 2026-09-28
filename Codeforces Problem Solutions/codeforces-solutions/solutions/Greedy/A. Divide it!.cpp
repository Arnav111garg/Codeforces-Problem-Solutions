#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    int count2 = 0, count3 = 0, count5 = 0;
    
    while (n % 2 == 0) {
        count2++;
        n /= 2;
    }
    
    while (n % 3 == 0) {
        count3++;
        n /= 3;
    }
    
    while (n % 5 == 0) {
        count5++;
        n /= 5;
    }
    
    if (n != 1) {
        cout << -1 << "\n";
    } else {
        long long moves = count2 + 2LL * count3 + 3LL * count5;
        cout << moves << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q = 1;
    cin >> q;
    while (q--) {
        solve();
    }

    return 0;
}