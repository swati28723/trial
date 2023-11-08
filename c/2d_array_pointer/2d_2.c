//2.Row and Column with Maximum
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int** l=(int**)malloc(m*sizeof(int*));
	for (int i=0; i<m; i++)
	{
		l[i]=(int*)malloc(n*sizeof(int));
	}
	
	int* r=(int*)malloc(n*sizeof(int));
	int* c=(int*)malloc(n*sizeof(int));
					
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &l[i][j]);
        }
    }
    int max=l[0][0], p, q;
    printf("l=[ ");
    for (int i=0; i<m; i++)
    {
        printf("[");
        for (int j=0; j<n; j++)
        {
            printf("%d, ", l[i][j]);
            if (l[i][j]>max)
            {	
            	max=l[i][j];
            	p=j;
            	q=i;
            }
        }
        printf("\b\b] ");
    }
    printf("]\n");
	printf("Maximum=%d\n", max);
    for (int i=0; i<m; i++)
    {
    	c[i]=l[i][p];
    }
    for (int j=0; j<n; j++)
    {
		r[j]=l[q][j];	
    }
    printf("column with maximum=[");
    for (int i=0; i<m; i++)
        {
            printf("%d, ", c[i]);
        }
    printf("\b\b]\n");
    printf("row with maximum=[");
    for (int i=0; i<n; i++)
        {
            printf("%d, ", r[i]);
        }
    printf("\b\b]\n");
	free(l);
	free(r);
	free(c);

    return 0;
}

