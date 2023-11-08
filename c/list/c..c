//Time Complexity - O(n)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int l[n];
	for (int i = 0; i < n; i = i + 1)
	{
 		l[i]=i+1;
	}
	
	printf("l=[");
	for (int i = 0; i < n; i = i + 1)
	{
		printf("%d, ", l[i]);
	}
	printf("\b\b]");
	printf("\n");
	return 0;
}




