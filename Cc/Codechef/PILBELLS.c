#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        int n, x, k, p, sum=0;
        scanf("%d%d%d%d", &n, &x, &k, &p);
        if (k==0)
        {
            printf("%d\n", p);
        }
        else if (k<n)
        {
            for (int j=k; j>0; j--)
            {
                if (x>0)
                {
                    sum=sum+10;
                    x--;
                }
                else
                {
                    sum=sum+5;
                    x--;
                }
            }
            printf("%d\n", sum+p);
        }
        else
        {
            for (int j=k; j>0; j--)
            {
                if (x>0)
                {
                    sum=sum+10;
                    x--;
                }
                else
                {
                    sum=sum+5;
                    x--;
                }
            }
            printf("%d\n", sum+p+20);
        }
        
    }
	return 0;
}