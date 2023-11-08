// Time Complexity - O(1)
# include <stdio.h>
int main()
{
	int a;
	printf("Enter a Age:");
	scanf("%d", &a);
	
	if(a>=18 && a>=65)
	{
	printf("He is eligible for vote and he is senior citizen also\n");
	}
	
	else if(a>=18 && a<65)
	{
	printf("He is only eligible for vote and he is not a senior citizen");
	}
	
	else
	{
	printf("He is not eligible for vote and he is not a senior citizen");
	}
return 0;
}
