#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        int n, factorial=1;
        scanf("%d", &n);
        for (int j=1; j<=n; j++)
        {
            factorial=factorial*j;
        }
        printf("%d\n", factorial);
    }
}