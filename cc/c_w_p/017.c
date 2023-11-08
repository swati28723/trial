// Time Complexity - O(1)
# include <stdio.h>
int main()
{
	int M;
	printf("Enter a Marks:");
	scanf("%d", &M);
	
	if(M<=100 && M>=90)
	{
	printf("Grade A\n");
	}
	else if(M<=89 && M>=75)
	{
	printf("Grade B\n");
	}
	
	else if(M<=74 && M>=60)
	{
	printf("Grade C\n");
	}
	
	else if(M<=59 && M>=45)
	{
	printf("Grade D\n");
	}
	
	else if(M<=44 && M>=0)
	{
	printf("Fail\n");
	}
	
	else
	{
	printf("You have entered Negative number.\n");
	}
	
return 0;
}
