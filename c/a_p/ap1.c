#include <stdio.h>
int main() 
{
    int n;
    printf("Enter len of list whatever you want: ");
    scanf("%d", &n);
    int l[n];
    int* ptr= l;
    printf("Enter %d number\n", n);
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &*(ptr+i));
    }    
    int j=n-1;
    printf("Reverse List=[");
    for (int i=0; i<n; i++)
    {
    printf("%d, ", *(ptr+j));
    j=j-1;
    }
    printf("\b\b]");
    printf("\n");

    return 0;
}

