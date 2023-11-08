// Time Complexity - O(1)
# include <stdio.h>
int main()
{
	float sp, cp, p, pp;
	printf("Enter selling price: ");
	scanf("%f", &sp);
	printf("Enter cost price: ");
	scanf("%f", &cp);
	if (sp > cp)
	{
		p = sp - cp;
		pp = (p/cp) * 100;
		printf("%.2f\n", pp);
	}
	else
	{
		printf("Invalid\n");
	}
	return 0;
}

