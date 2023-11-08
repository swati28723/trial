// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int a;
scanf("%d", &a);
	if(a > 0)
		{
		printf("The number %d is positive\n", a);
		}
	else if(a < 0)
	 	{
	 	printf("The number %d is negative\n", a);
	 	}
	 else
	 	{
	 	printf("The number %d is zero\n", a);
	 	}
return 0;
}

