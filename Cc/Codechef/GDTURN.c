#include <stdio.h>

int main(void) 
{
    int T;
    scanf("%d", &T);
    while (T>0)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if ((x+y)>6)
        {
            printf("YES\n");
            T--;
        }
        else
        {
            printf("NO\n");
            T--;
        }
    }
	return 0;
}


