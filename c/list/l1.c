/*//To create a list of natural numbers till 20 and print it

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int l[n];
	for (int i = 0; i < n; i = i + 1)
	{
	scanf("%d", &l[i]);
	}
	for (int i = 0; i < n; i = i + 1)
	{
	printf("%d", l[i]);
	}
	printf("\n");
	return 0;
}

*/





#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int l[n];
	int *ptr=l;
	for (int i = 0; i < n; i = i + 1)
	{
	scanf("%d", &*(ptr+i));
	}
	for (int i = 0; i < n; i = i + 1)
	{
	printf("%d ", *(ptr+i));
	}
	printf("\n");
	return 0;
}
