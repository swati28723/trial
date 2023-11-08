// Time Complexity - O(1)
# include <stdio.h>
int main()
{
	int p, r, t;
	printf("Enter amount:");
	scanf("%d", &p);
	printf("Enter rate of interest:");
	scanf("%d", &r);
	printf("Enter time:");
	scanf("%d", &t);
	printf("The simple interest of agiven amount is %d.\n", p*r*t);
	return 0;
}
	
