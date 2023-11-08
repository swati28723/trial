#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n];
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			a[i][j]=0;
		}
	}
	int count=1, i=0, j=n/2;
	a[i][j] = count;
	while (count<=n*n)
	{
		count++;
		if ((i==0)&&(j==n-1)) 
		{
			i++;
		}
		else if (i==0)
		{
			i=n-1;
			j++;
		}
		else if (j==n-1)
		{
			i--;
			j=0;
		}
		else if (a[i-1][j+1]!=0) {
			i++;
		} 
		else 
		{
			i--;
			j++;
		}
		
		a[i][j]=count;
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

		
