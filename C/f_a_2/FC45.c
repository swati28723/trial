#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    b=a%10;
    if (b%3==0)
    {
        printf("The last digit of %d is divisible by 3\n", a);
    }
    else
    {
        printf("The last digit of %d is not divisible by 3\n", a);
    }
    return 0;
}

