#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long l, r;
    cin >> l >> r;
    
    int score = 0;
    while ((1LL << (score + 1)) <= r) {
        score++;
    }
    
    cout << score << "\n";
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