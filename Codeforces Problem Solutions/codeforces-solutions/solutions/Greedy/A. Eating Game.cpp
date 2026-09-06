#include <bits/stdc++.h>
using namespace std;

int simulate(int start_player, vector<int> a, int n) {
    int current_player = start_player;
    int last_winner = -1;

    while (true) {
        bool dishes_left = false;
        for (int x : a) {
            if (x > 0) {
                dishes_left = true;
                break;
            }
        }
        if (!dishes_left) break;

        if (a[current_player] > 0) {
            a[current_player]--;
            last_winner = current_player;
        }

        current_player = (current_player + 1) % n;
    }

    return last_winner;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    set<int> possible_winners;

    for (int start = 0; start < n; ++start) {
        int winner = simulate(start, a, n);
        possible_winners.insert(winner);
    }

    cout << possible_winners.size() << "\n";
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