#include <stdio.h>
int fun(int n)
{
    if (n==0)
    {
        return 1;
    }
    fun(n-1);
    printf("%d ", n);
}
int main()
{
    printf("%d ", fun(4));
    return 0;
}
