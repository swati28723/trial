#include <stdio.h>

int main()
{
    int a, b;
    char c;
    scanf("%d%d%c", &a, &b, &c);
    if (c=='+')
    {
        printf("%d", a-b);
    }
    
    else if (c=='+')
    {
        printf("%d", a+b);
    }
    
    if (c=='+')
    {
        printf("%d", a*b);
    }
    
    else
    {
        printf("%f", a/b);
    }
    return 0;
}

