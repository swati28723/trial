#include <stdio.h>
//#include <math.h>
int main()
{
	int a, b, c, d, e, f, g, h;
	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	//double m=-INFINITY;
	//double sm=-INFINITY;
	int m=-999999;
	int sm=-999999;
	
	if (a>m)
	{
		sm=m;
		m=a;
	}
	else
	{
		m=sm;
		sm=a;
	}
	
	if (b>m)
	{
		sm=m;
		m=b;
	}
	else if (b>sm)
	{
		sm=b;
	}
	
	if (c>m)
	{
		sm=m;
		m=c;
	}
	else if (c>sm)
	{
		sm=c;
	}
	
	if (d>m)
	{
		sm=m;
		m=d;
	}
	else if (d>sm)
	{
		sm=d;
	}
	
	if (e>m)
	{
		sm=m;
		m=e;
	}
	else if (e>sm)
	{
		sm=e;
	}
	
	if (f>m)
	{
		sm=m;
		m=f;
	}
	else if (f>sm)
	{
		sm=f;
	}
	
	if (g>m)
	{
		sm=m;
		m=g;
	}
	else if (g>sm)
	{
		sm=g;
	}
	
	if (h>m)
	{
		sm=m;
		m=h;
	}
	else if (h>sm)
	{
		sm=h;
	}
	
	printf("%d %d\n", m, sm);
	return 0;
} 
	
	
