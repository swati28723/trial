// Time Complexity - O(n)
#include <stdio.h>
int main()
{   
    int n;
    scanf("%d", &n);
    int l[n];
    for (int i=1; i<=n; i=i+1)
    {
        scanf("%d", &l[i]);
    }
printf("%ls\n", l);
}

