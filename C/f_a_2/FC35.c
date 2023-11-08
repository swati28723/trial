// Time Complexity - O(1)
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	if (n>=0 && n<=6)
	{
	if (n==0)
		{
		printf("Monday\n");
		}

	else if (n==1)
		{
		printf("Tuesday\n");
		}

	else if (n==2)
		{
		printf("Wednesday\n");
		}

	else if (n==3)
		{
		printf("Thursday\n");
		}

	else if (n==4)
		{
		printf("Friday\n");
		}
	else if (n==5)
		{
		printf("Saturday\n");
		}

	 else 
		{
		printf("Sunday\n");
		}
	}
	else
	{
	printf("Enter valid day number 0-6\n");
	}
	return 0;
}
