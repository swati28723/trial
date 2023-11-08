//To store the first 100 natural numbers in an array and then show them in the reverse sequence.
/*
#include <stdio.h>
int main()
{

	int l[100];
	for (int i = 1; i <=100; i = i + 1)
	{
		l[i]=i;
	}
	printf("array={");
	for (int i = 1; i <=100; i = i + 1)
	{
		printf("%d, ", l[i]);
	}
	printf("\b\b}");
	printf("\n");
	return 0;
}
*/


#include <stdio.h>
int main()
{

	int l[100];
	int* ptr=l;
	for (int i = 1; i <=100; i = i + 1)
	{
		*(ptr+i)=i;
	}
	printf("array={");
	for (int i = 100; i > 0; i = i - 1)
	{
		printf("%d, ", *(ptr+i));
	}
	printf("\b\b}");
	printf("\n");
	return 0;
}
