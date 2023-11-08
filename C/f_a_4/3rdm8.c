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
	int tm=-999999;
	
	if (a>m)
	{
		tm=sm;
		sm=m;
		m=a;
	}
	else if (a>sm)
	{
		tm=sm;
		sm=a;
	}
	else if (a>tm)
	{
		tm=a;
	}
	
	if (b>m)
	{
		tm=sm;
		sm=m;
		m=b;
	}
	else if (b>sm)
	{
		tm=sm;
		sm=b;
	}
	else if (b>tm)
	{
		tm=b;
	}
	
	if (c>m)
	{
		tm=sm;
		sm=m;
		m=c;
	}
	else if (c>sm)
	{
		tm=sm;
		sm=c;
	}
	else if (c>tm)
	{
		tm=c;
	}
	
	if (d>m)
	{
		tm=sm;
		sm=m;
		m=d;
	}
	else if (d>sm)
	{
		tm=sm;
		sm=d;
	}
	else if (d>tm)
	{
		tm=d;
	}
	
	if (e>m)
	{
		tm=sm;
		sm=m;
		m=e;
	}
	else if (e>sm)
	{
		tm=sm;
		sm=e;
	}
	else if (e>tm)
	{
		tm=e;
	}
	
	if (f>m)
	{
		tm=sm;
		sm=m;
		m=f;
	}
	else if (f>sm)
	{
		tm=sm;
		sm=f;
	}
	else if (f>tm)
	{
		tm=f;
	}
	
	if (g>m)
	{
		tm=sm;
		sm=m;
		m=g;
	}
	else if (g>sm)
	{
		tm=sm;
		sm=g;
	}
	else if (g>tm)
	{
		tm=g;
	}
	
	if (h>m)
	{
		tm=sm;
		sm=m;
		m=h;
	}
	else if (h>sm)
	{
		tm=sm;
		sm=h;
	}
	else if (h>tm)
	{
		tm=h;
	}
	
	
	
	
	printf("%d %d %d\n", m, sm, tm);
	return 0;
} 
	
	
