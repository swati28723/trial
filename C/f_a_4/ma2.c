#include <stdio.h>
int mergedarray(int n1, int n2, int m1, int m2, int l1[n1][m1], int l2[n2][m2])
{
    int n3;
	if (n1>n2)
	{
		n3=n1;
	}
	else 
	{
		n3=n2;
	}
	
	int m3;
	if (m1>m2)
	{
		m3=m1;
	}
	else 
	{
		m3=m2;
	}
	int l3[n3][m3];
	for (int i=0; i<n2; i++)
	{
	
		for (int j=0; j<m2; j++)
		{
			l3[i][j]=l1[i][j]+l2[i][j];
		}
	}
	
	for (int i=0; i<n2; i++)
	{
	
		for (int j=0; j<m2; j++)
		{
			printf("%d ", l3[i][j]);
		}
	}
}


int main()
{
	int n1, m1;
	printf("Enter len of array");
	scanf("%d%d", &n1, &m1);
	int l1[n1][m1];
	for (int i=0; i<n1; i++)
	{
	
		for (int j=0; j<m1; j++)
		{
			scanf("%d", &l1[i][j]);
		}
	}
	
	
	int n2, m2;
	printf("Enter len of array");
	scanf("%d%d", &n2, &m2);
	int l2[n2][m2];
	for (int i=0; i<n2; i++)
	{
	
		for (int j=0; j<m2; j++)
		{
			scanf("%d", &l2[i][j]);
		}
	}
	mergedarray( n1, n2, m1, m2, l1, l2);
    return 0;
}
