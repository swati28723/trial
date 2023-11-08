// Time Complexity - O(1)
#include <math.h>
#include <stdio.h>

int main() {
    int p, i, n;
    printf("Enter amount: ");
    scanf("%d", &p);
    printf("Enter rate of interest: ");
    scanf("%d", &i);
    printf("Enter years: ");
    scanf("%d", &n);
    int T = p * pow(1 + i / 100.0, n);
    printf("The money grows to an amount T is %d.\n", T);
    return 0;
}










