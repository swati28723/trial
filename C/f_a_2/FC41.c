// Time Complexity - O(1)
# include <stdio.h>
int main()
{
	int n;
	printf("Enter a nummber: ");
	scanf("%d", &n);
	if (n==1000)
	{
	printf("%d is the smallest 4 digit number.\n", n);
	}
	else
	{
	printf("%d is not the smallest 4 digit number.\n", n);
	}
	return 0;
}
