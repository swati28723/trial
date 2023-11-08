// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int num;
printf(" enter a number");
scanf("%d", &num);
	if(num > 0)
		{
		printf("num is positive\n");
		}
	else if(num < 0)
	 	{
	 	printf("num is negative\n");
	 	}
	 else
	 	{
	 	printf("num is zero\n");
	 	}
return 0;
}

