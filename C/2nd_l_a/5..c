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
	
	int p, q, k;
	printf("Enter the value you want to change");
	scanf("%d", &p);
	printf("Enter the value you want to enter");
	scanf("%d", &q);
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (l[i][j]==p)
			{
				l[i][j]=q;
			}
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
	
	return  0;
}
	
