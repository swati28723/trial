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
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &l[i][j]);
        }
    }

    printf("l=[ ");
    for (int i = 0; i < m; i++)
    {
        printf("[");
        for (int j = 0; j < n; j++)
        {
            printf("%d, ", l[i][j]);
        }
        printf("\b\b], ");
    }
    printf("\b\b ]\n");

    int p, q;
    scanf("%d%d", &p, &q);
    int** a=(int**)malloc(p*sizeof(int*));
    for (int i=0; i<p; i++)
    {
    	a[i]=(int*)malloc(q*sizeof(int));
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("a=[ ");
    for (int i = 0; i < p; i++)
    {
        printf("[");
        for (int j = 0; j < q; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("\b\b], ");
    }
    printf("\b\b ]\n");

    //int max_m = (m > p) ? m : p;
    //int max_n = (n > q) ? n : q;
    int max_m, max_n;
    if (m>p)
    {
    	max_m=m;
    }
    else
    {
    	max_m=p;
    }
    if (n>q)
    {
    	max_n=n;
    }
    else
    {	
    	max_n=q;
    }

	int** r=(int**)malloc(m*sizeof(int*));
    for (int i=0; i<max_m; i++)
    {
    	r[i]=(int*)malloc(max_n*sizeof(int));
    }
    for (int i = 0; i < max_m; i++)
    {
        for (int j = 0; j < max_n; j++)
        {
            if (i < m && j < n)
            {
                r[i][j] = l[i][j];
            }
            else
            {
                r[i][j] = 0;
            }
            if (i < p && j < q)
            {
                r[i][j] += a[i][j];
            }
        }
    }

    printf("r=[ ");
    for (int i = 0; i < max_m; i++)
    {
        printf("[");
        for (int j = 0; j < max_n; j++)
        {
            printf("%d, ", r[i][j]);
        }
        printf("\b\b], ");
    }
    printf("\b\b ]\n");
    free(l);
    free(a);
    free(r);
    
    return 0;
}

