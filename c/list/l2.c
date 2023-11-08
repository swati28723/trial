/*//To input 5 names from the user and print them.

#include <stdio.h>
int main()
{
	char l[1000][51]={0};
	int i, n;
	printf("Enter a Number: ");
	scanf("%d", &n);
	for (i=0; i<n; i=i+1)
	{
		 printf("Enter name %d:", i+1);
		 scanf("%s", l[i]);
	}

	printf("list=[");
	for (i=0; i<n; i=i+1)
	{
		printf("%s, ", l[i]);
	}
	printf("\b\b]");
	printf("\n");

return 0;
}
*/




#include <stdio.h>
int main()
{
	char l[1000][51]={0};
	char (*ptr)[51]=l;
	int i, n;
	printf("Enter a Number: ");
	scanf("%d", &n);
	for (i=0; i<n; i=i+1)
	{
		 printf("Enter name %d:", i+1);
		 scanf("%s", *(ptr+i));
	}

	printf("list=[");
	for (i=0; i<n; i=i+1)
	{
		printf("%s, ", *(ptr+i));
	}
	printf("\b\b]");
	printf("\n");

return 0;
}

