#include <stdio.h>
int gcd(int a, int b)
{
    int r;
	if (a < b) 
	{
    		r = a;
	} 
	else 
	{
    		r = b;
	}
    while (r>0)
    {
    	if (a%r==0 && b%r==0)
    	break;
    	r--;
    }
    return r;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}

