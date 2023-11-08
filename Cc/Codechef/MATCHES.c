#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d%d", &a, &b);

        int c = a + b;
        int e = 0;

        while (c > 0) {
            int d = c % 10;
            
            switch (d) {
                case 0:
                    e += 6;
                    break;
                case 1:
                    e += 2;
                    break;
                case 2:
                case 3:
                case 5:
                    e += 5;
                    break;
                case 4:
                    e += 4;
                    break;
                case 6:
                case 9:
                    e += 6;
                    break;
                case 7:
                    e += 3;
                    break;
                case 8:
                    e += 7;
                    break;
            }
            
            c /= 10;
        }

        printf("%d\n", e);
    }

    return 0;
}

