//3.Transpose Matrix.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **l, **a;
    int m, n;
    scanf("%d%d", &m, &n);
    //int l[m][n], a[m][n];
    l = (int **)malloc(m * sizeof(int *));
    for (int i=0; i<m; i++)
    {
    	l[i]=(int*)malloc(n*sizeof(int));
    }   
    a = (int **)malloc(m * sizeof(int *));
    for (int i=0; i<m; i++)
    {
    	a[i]=(int*)malloc(n*sizeof(int));
    }       	    
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &l[i][j]);
        }
    }
    printf("l=[ ");
    for (int i=0; i<m; i++)
    {
        printf("[");
        for (int j=0; j<n; j++)
        {
            printf("%d, ", l[i][j]);
        }
        printf("\b\b] ");
    }
    printf("]\n");
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            a[j][i]=l[i][j];
        }
    }
    printf("a=[ ");
    for (int i=0; i<m; i++)
    {
        printf("[");
        for (int j=0; j<n; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("\b\b] ");
    }
    printf("]\n");
    free(l);
    free(a);
    return 0;
}
