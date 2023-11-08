#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int** l=(int**)malloc(m*(sizeof(int*)));
	for (int i=0; i<m; i++)
	{
		l[i]=(int*)malloc(n*(sizeof(int)));
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
	printf("Principal of Diagonal=[");
	for (int i=0; i<m; i++)
	{
		printf("%d, ", l[i][i]);
	}
	printf("\b\b]\n");
	free(l);
	return 0;
}
	
