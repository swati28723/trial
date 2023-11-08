#include <stdio.h>
int gcd(int a, int b)
{
	int r;
	while (a%b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
return b;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}

		
