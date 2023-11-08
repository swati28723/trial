//Pointers and Arrays
#include <stdio.h>
int main()
{
	int A[] = { 2, 4, 5, 8, 1};
	printf("%lu\n", A);
	printf("%lu\n", &A[0]);
	printf("%d\n", A[0]);
	printf("%d\n", *A);
	return 0;
} 




/*
#include <stdio.h>
int main()
{
	int A[] = { 2, 4, 5, 8, 1};
	int *p = A;
	//A++ we can't initialised A. incrementing A by itself is invalid
	//p++;//valid
	for (int i=0; i<5; i++)
	{
		printf("Address = %lu\n", &A[i]);
		printf("Address = %lu\n", A+i);
		printf("Value = %d\n", A[i]);
		printf("Value = %d\n", *(A+i));
	}
		return 0;
} 
*/
