#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int squareRoot = 0;
    int low = 1, high = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid * mid <= n) {
            squareRoot = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    printf("%d", squareRoot);
    
    return 0;
}

