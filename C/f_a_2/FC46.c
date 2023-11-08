#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a>=18)
    {
        printf("Person is eligible for voting\n");
    }
    else
    {
        printf("Person is not eligible for voting\n");
    }
    return 0;
}

