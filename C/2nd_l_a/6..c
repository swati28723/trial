#include <stdio.h>
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int l[m][n];
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
	int a[p][q];
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
	
	int r[m][n];
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
	return 0;
}



