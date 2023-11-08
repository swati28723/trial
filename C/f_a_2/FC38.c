// Time Complexity - O(1)
# include <stdio.h>
int main()
{
	float sp, cp, l,lp;
	printf("Enter selling price: ");
	scanf("%f", &sp);
	printf("Enter cost price: ");
	scanf("%f", &cp);
	if (sp < cp)
	{
		l = cp - sp;
		lp = (l/cp) * 100;
		printf("%.2f\n", lp);
	}
	else
	{
		printf("Invalid\n");
	}
	return 0;
}



