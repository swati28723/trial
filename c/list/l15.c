//Create a list that stores all the prime numbers up to n.
#include <stdio.h>
int main()
{
	int n, i,s=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	int l[100];
	for (i=1; i<=n; i++)
	{ 
		int c=0;
		for (int j=1; j<=i; j++)
		{
		if (i%j==0)
		{
			c=c+1;
		}
		}
		if (c==2)
		{
			l[s]=i;
			s++;
		}
	}
	printf("Prime numbers up to %d=[", n);
	for (int j=0; j<s; j++)
	{
	printf("%d, ", l[j]);
	}
	printf("\b\b]\n");
	return 0;
}
