#include <bits/stdc++.h>
using namespace std;

void solve() {
    string table;
    cin >> table;
    
    bool can_play = false;
    for (int i = 0; i < 5; i++) {
        string hand;
        cin >> hand;
        
        if (hand[0] == table[0] || hand[1] == table[1]) {
            can_play = true;
        }
    }
    
    if (can_play) {
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