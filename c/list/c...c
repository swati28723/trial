//Time Complexity - O(n)
#include <string.h>
#include <stdio.h>
int main()
{
	int n, i, s=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	int l[100];
	for (i=1; i<=n; i++)
	{ 
		int c=0;

		for (int j=1; j<=i/2; j++)
		{
			if (i%j==0)
			{
			c=c+j;
			}
		}
		if (c==i)
		{
			l[s]=i;
			s++;
		}
	}
	printf("Perfect numbers up to %d=[", n);
	for (int j=0; j<s; j++)
	{
	printf("%d, ", l[j]);
	}
	printf("\b\b]\n");
return 0;
}

