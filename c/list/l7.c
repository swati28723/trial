#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("list made by user=[");
	for (int i=0; i<n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\b\b]\n");
	int l[n];
	int j=a[0];
	for (int i=0; i<n; i++)
	{
		l[i]=j;
		j=j+1;
	}
	printf("consective list=[");
	for (int i=0; i<n; i++)
	{
		printf("%d, ", l[i]);
	}
	printf("\b\b]\n");
	int c=0;
	for (int i=0; i<n; i++)
	{
		if (a[i]==l[i])
		{
			c++;
		}	
	}
	if (c==n)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}

