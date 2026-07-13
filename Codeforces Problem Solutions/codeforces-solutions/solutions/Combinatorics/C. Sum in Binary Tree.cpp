#include <stdio.h>

void solve() {
    long long n;
    // Read the 64-bit integer using %lld
    if (scanf("%lld", &n) != 1) return;
    
    long long total_sum = 0;
    
    // Process bottom-up from the given node n to the root (1)
    while (n > 0) {
        total_sum += n;
        n /= 2; // Integer division finds the parent node
    }
    
    // Print the 64-bit integer using %lld followed by a newline
    printf("%lld\n", total_sum);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}