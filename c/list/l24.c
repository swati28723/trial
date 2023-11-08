//To create a list of n numbers and print the maximum number.
/*
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
	int max=l[0];
	printf("list=[");
	for (int i = 0; i < n; i = i + 1)
	{
	printf("%d, ", l[i]);
	if (l[i]>max)
	{
	max=l[i];
	}
	}
	printf("\b\b]");
	printf("\n");
	printf("Max is in the list is %d.\n", max);	
	return 0;
}
*/





#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int l[n];
	int* ptr=l;
	for (int i = 0; i < n; i = i + 1)
	{
	scanf("%d", &*(ptr+i));
	}
	int max=l[0];
	printf("list=[");
	for (int i = 0; i < n; i = i + 1)
	{
	printf("%d, ", *(ptr+i));
	if (*(ptr+i)>max)
	{
	max=*(ptr+i);
	}
	}
	printf("\b\b]");
	printf("\n");
	printf("Max is in the list is %d.\n", max);	
	return 0;
}
