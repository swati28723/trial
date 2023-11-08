#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        int a, b, c, d, k;
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &k);
        int distance= (a-c)+(b-d);
        if (k>=distance && (k-distance)%2==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	return 0;
}

