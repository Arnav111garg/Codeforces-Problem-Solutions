#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int first_score;
    cin >> first_score;

    int max_score = first_score;
    int min_score = first_score;
    int amazing_count = 0;

    for (int i = 1; i < n; ++i) {
        int current_score;
        cin >> current_score;

        if (current_score > max_score) {
            amazing_count++;
            max_score = current_score;
        } 
        else if (current_score < min_score) {
            amazing_count++;
            min_score = current_score; 
        }
    }

    cout << amazing_count << "\n";
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