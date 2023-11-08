#include <stdio.h>
int main()
{
	int sp, cp;
	scanf("%d%d", &sp, &cp);
	if (sp>cp)
	{
		printf("Profit incurred = %d\n", sp -cp);
	}
	else if (sp<cp)
	{
		printf("Loss incurred = %d\n", cp - sp);
	}
	else
	{
		printf("No profit, no loss\n");
	}
	return 0;
}
