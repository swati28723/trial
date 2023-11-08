//Time Complexity - O(n)
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long l[n];
    for (int i = 0; i < n; i = i + 1)
    {
        scanf("%ld", &l[i]);
    }
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%ld ", l[i]);
    }
    printf("\n");
    return 0;
}

