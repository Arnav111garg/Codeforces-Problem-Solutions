#include <stdio.h>
 
void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
    if (n % 3 == 0) {
        printf("Second\n");
    } else {
        printf("First\n");
    }
}
 
int main() {
    int t;
    // Read number of test cases
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}