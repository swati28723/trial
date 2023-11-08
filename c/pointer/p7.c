/*// Arrays as function argument
#include <stdio.h>
int SumofElements(int a[], int size)
{
	int i, sum=0;
	for (i=0; i<size; i++)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int a[]= {1,2,3,4,5};
	int size=sizeof(a)/sizeof(a[0]);//give number of element in array
	//int size = sizeof(A);- give size of array in bytes
	int total= SumofElements(a, size);
	printf("Sum of Elements = %d\n", total);
	return 0;
}





#include <stdio.h>
int SumofElements(int a[])
{
	int i, sum=0;
	int size=sizeof(a)/sizeof(a[0]);	
	for (i=0; i<size; i++)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int a[]= {1,2,3,4,5};
	int total= SumofElements(a);
	printf("Sum of Elements = %d\n", total);
	return 0;
}






#include <stdio.h>
int SumofElements(int a[])
{
	int i, sum=0;
	int size=sizeof(a)/sizeof(a[0]);
	printf("SOE - Size of a = %d, size of a[0] = %d\n",sizeof(a), sizeof(a[0]));	
	for (i=0; i<size; i++)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int a[]= {1,2,3,4,5};
	int total= SumofElements(a);
	printf("Sum of Elements = %d\n", total);
	printf("Main - Size of a = %d, size of a[0] = %d\n",sizeof(a), sizeof(a[0]));	
	return 0;
}





#include <stdio.h>
int SumofElements(int* a, int size)//'int* a' or 'int a[]' are same
{
	int i, sum=0;
	printf("SOE - Size of a = %d, size of a[0] = %d\n",sizeof(a), sizeof(a[0]));	
	for (i=0; i<size; i++)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int a[]= {1,2,3,4,5};
	int size=sizeof(a)/sizeof(a[0]);
	int total= SumofElements(a, size);//a can be used for &a[0]
	printf("Sum of Elements = %d\n", total);
	printf("Main - Size of a = %d, size of a[0] = %d\n",sizeof(a), sizeof(a[0]));	
	return 0;
}
*/





#include <stdio.h>
void Double(int* a, int size)//'int* a' or 'int a[]' are same
{
	int i, sum=0;
	for (i=0; i<size; i++)
	{
		a[i]=2*a[i];
	}
}
int main()
{
	int a[]= {1,2,3,4,5};
	int size = sizeof(a)/sizeof(a[0]);
	int i;
	Double(a, size);
	for (i=0; i<size; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
