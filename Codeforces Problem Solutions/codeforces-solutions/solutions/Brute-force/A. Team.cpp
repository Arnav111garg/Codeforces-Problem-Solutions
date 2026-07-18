#include <stdio.h>
#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int solved_count = 0;
 
    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
 
        if (petya + vasya + tonya >= 2) {
            solved_count++;
        }
    }
 
    cout << solved_count << "\n";
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