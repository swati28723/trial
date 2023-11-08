#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x>=1)
        {
            if (x<100)
            {
                printf("Easy\n");
            }
            else if (x<200)
            {
                printf("Medium\n");
            }
            else
            {
                printf("Hard\n");
            }
        }
        
    }
	return 0;
}

