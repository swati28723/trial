#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a%7==0)
    {
        printf("%d divisible by 7\n", a);
    }
    else
    {
        printf("%d is not divisible by 7\n", a);
    }
    return 0;
}

