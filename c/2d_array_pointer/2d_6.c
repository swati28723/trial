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
	for (int i=0; i<p; i++)
	{
		for (int j=0; j<q; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("a=[ ");
	for (int i=0; i<p; i++)
	{
		printf("[");
		for (int j=0; j<q; j++)
		{
			printf("%d, ", a[i][j]);
		}
		printf("\b\b], ");
	}
	printf("\b\b ]\n");
	
	if (m != p || n != q)
    {
        printf("Matrix dimensions do not match.\n");
        return 0;
    }
	
	int** r=(int**)malloc(m*sizeof(int*));
    for (int i=0; i<m; i++)
    {
    	r[i]=(int*)malloc(n*sizeof(int));
    }
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			r[i][j]=l[i][j]+a[i][j];
		}
	}
	
	printf("r=[ ");
	for (int i=0; i<m; i++)
	{
		printf("[");
		for (int j=0; j<n; j++)
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



