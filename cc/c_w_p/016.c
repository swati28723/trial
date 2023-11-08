// Time Complexity - O(1)
# include <stdio.h>
int main()
{
	int p;
	printf("Enter a Number:");
	scanf("%d", &p);
	
	if(p<=100)
	{
	if(p>=90)
		{
		printf("Grade X\n");
		}
		
	else if(p>=75)
		{
		printf("Grade A\n");
		}
		
	else if(p>=60)
		{
		printf("Grade B\n");
		}
		
	else if(p>=45)
		{
		printf("Grade C\n");
		}
		
	else if(p>=0)
		{
		printf("Fail\n");
		}
		
	else
		{
		printf("You have entered Negative number.\n");
		}
	}
	
	
	else
	{
	printf(" You have entered number greater than 100.");
	}
	
return 0;
}


