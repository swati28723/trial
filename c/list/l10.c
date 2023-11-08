//To count positive and negative elements in a list.
/*
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("You have enter %d numbers.", n);
    long l[n];
    for (int i = 0; i < n; i = i + 1)
    {
        scanf("%ld", &l[i]);
    }
    printf("l=[");
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%ld, ", l[i]);
    }
    printf("]");
    printf("\n");
    
    int c = 0;
    int count = 0;
    for (int i = 0; i < n; i = i + 1)
    {
    if (l[i] > 0)
    {
    c =c + 1;
    }
    else
    {
    count = count + 1;
    }
    }
    printf("Positive=%d & Negative=%d", c, count);
    
    return 0;
}
*/






#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("You have enter %d numbers.", n);
    long l[n];
    long *ptr=l;
    for (int i = 0; i < n; i = i + 1)
    {
        scanf("%ld", &*(ptr+i));
    }
    printf("l=[");
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%ld, ", *(ptr+i));
    }
    printf("]");
    printf("\n");
    
    int c = 0;
    int count = 0;
    for (int i = 0; i < n; i = i + 1)
    {
    if (l[i] > 0)
    {
    c =c + 1;
    }
    else
    {
    count = count + 1;
    }
    }
    printf("Positive=%d & Negative=%d\n", c, count);
    
    return 0;
}
