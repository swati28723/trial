//2.Row and Column with Maximum
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    
    
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    
    int max=a[0][0];
    int l=0, k=0;
    
    
    printf("a=[ ");
    for (int i=0; i<m; i++)
    {
        printf("[");
        for (int j=0; j<n; j++)
        {
            printf("%d, ", a[i][j]);
            if (a[i][j]>max)
            {	
            	max=a[i][j];
            	l=j;
            	k=i;
            }
        }
        printf("\b\b] ");
    }
    printf("]\n");
    printf("max=%d\n", max);
    printf("column ");
    for (int i=0; i<m; i++)
    {
	printf("%d ", a[i][l]);
    }
     printf("row ");
   
    for (int i=0; i<n; i++)
    {
    	printf("%d ", a[k][i]);
    }
    printf("\n");

    return 0;
}
