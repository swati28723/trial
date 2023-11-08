//Time Complexity - O(n)
/*#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    long l[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%ld", &l[i]);
    }
    printf("[ ");
    for (int i = 0; i < n; i++) 
    {
        printf("%ld ", l[i]);
    }
    printf("]");
    printf("\n");
    return 0;
}
*/





#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    long l[n];
    long *ptr=l;
    for (int i = 0; i < n; i++) 
    {
        scanf("%ld", &*(ptr+i));
    }
    printf("[ ");
    for (int i = 0; i < n; i++) 
    {
        printf("%ld ", *(ptr+i));
    }
    printf("]");
    printf("\n");
    return 0;
}
