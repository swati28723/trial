#include <stdio.h>
int main()
{
int k=1, n;
printf("Enter a number: ");
scanf("%d", &n);
int a[n][n];

for (int i=0; i<n; i++)
{	
	for (int j=0; j<n; j++)
	{
		a[i][j]=k;
		k++;
	}
printf("\n");
}
printf("row_matrix=[");
for (int i=0; i<n; i++)
{	
	printf("[");
	for (int j=0; j<n; j++)
	{
		printf("%d, ", a[i][j]);
		k++;
	}
	printf("\b\b], ");
}
printf("\b\b]");
printf("\n");
return 0;
}
