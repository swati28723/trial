#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a>=100 && a<=999)
    {
        printf("%d is Three digit number\n", a);
    }
    else
    {
        printf("%d is not three digit number\n", a);
    }
}
