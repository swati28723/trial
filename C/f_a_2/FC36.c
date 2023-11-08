// Time Complexity - O(1)
#include <stdio.h>
int main()
{
int n;
printf("Enter n: ");
scanf("%d", &n);
if (n>=1 && n<=12)
{
if (n==1)
	{
	printf("January\n");
	}

else if (n==2)
	{
	printf("February\n");
	}

else if (n==3)
	{
	printf("March\n");
	}

else if (n==4)
	{
	printf("April\n");
	}

else if (n==5)
	{
	printf("May\n");
	}
else if (n==6)
	{
	printf("June\n");
	}
	
else if (n==7)
	{
	printf("July\n");
	}

else if (n==8)
	{
	printf("August\n");
	}
	
else if (n==9)
	{
	printf("September\n");
	}
	
else if (n==10)
	{
	printf("October\n");
	}
	
else if (n==11)
	{
	printf("November\n");
	}
 else 
	{
	printf("December\n");
	}
}
else
{
printf("Enter valid month number 1-12.\n");
}
return 0;
}
