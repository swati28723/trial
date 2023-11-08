// Time Complexity - O(n)
#include <stdio.h>
int main()
{
    int n, s, i;
    scanf("%d", &n);
    i=1;
    s=0;
    while (i<=n)
    {
        s=s+i;
        i=i+1;
    }
    printf("%d", s);
}
