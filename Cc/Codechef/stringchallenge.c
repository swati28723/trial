#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s", a);
	
	int n = strlen(a);
	int c = 1;
	for (int i=1; i<n; i++)
	{
		if (a[i ] == a[i-1])
		{
			c++;
		}
		else 
		{
			printf("%d%c", c, a[i-1]);
			c = 1;
		}
	}
	printf("%d%c", c, a[n-1]);
	return 0;
}
