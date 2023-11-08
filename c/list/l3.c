/*#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    long l[n];
    for (int i=0; i<n; i++) 
    {
        scanf("%ld", &l[i]);
    }
    printf("List before reverse=[");
    for (int i=0; i<n; i++) 
    {
        printf("%ld, ", l[i]);
    }
    printf("\b\b]");
    printf("\n");
    
    int j=n-1;
    printf("List after reverse=[");
    for (int i=0; i<n; i++)
    {
    printf("%ld, ", l[j]);
    j=j-1;
    }
    printf("\b\b]");
    printf("\n");

    return 0;
}
*/





#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    long l[n];
    long *ptr=l;
    for (int i=0; i<n; i++) 
    {
        scanf("%ld", &*(ptr+i));
    }
    printf("List before reverse=[");
    for (int i=0; i<n; i++) 
    {
        printf("%ld, ", *(ptr+i));
    }
    printf("\b\b]");
    printf("\n");
    
    int j=n-1;
    printf("List after reverse=[");
    for (int i=0; i<n; i++)
    {
    printf("%ld, ", *(ptr+j));
    j=j-1;
    }
    printf("\b\b]");
    printf("\n");

    return 0;
}

