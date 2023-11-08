#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i=T; i>0; i--)
    {
        int A, B;
        scanf("%d%d", &A, &B);
        printf("%d\n", (A+B));
    }
}