/*#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++)
	{
	    int n, sum=0;
	    scanf("%d", &n);
	    while(n>0)
	    {
	        sum=sum+(n%10);
	        n=n/10;
	    }
	    printf("%d\n", sum);
	}
	return 0;
}


#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++)
	{
	    int n, sum, sum1;
	    scanf("%d", &n);
	    sum=n%10;
	    for (int i=n; i>0; i=i/10)
	    {
            sum1=i%10;
	    }
	    printf("%d\n", sum+sum1);
	}
	return 0;
}

#include <stdio.h>

int main(void) 
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a>b)
	{
	    if (a<c)
	    {
	        printf("%d\n", a);
	    }
	    else if (c<b)
	    {
	        printf("%d\n", c);
	    }
	    else
	    {
	        printf("%d\n", b);
	    }
	}
	else
	{
	    if (b<c)
	    {
	        printf("%d\n", b);
	    }
	    else if (c<a)
	    {
	        printf("%d\n", c);
	    }
	    else
	    {
	        printf("%d\n", a);
	    }
	}
	
	return 0;
}
*/

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++)
	{
	    int s, a, b, c;
	    scanf("%d%d%d%d", &s, &a, &b, &c);
	    int p=(c/100)*s;
	    if (c>0)
	    {
	        printf("%d\n", s-p);
	    }
	    else
	    {
	        printf("%d\n", s+p);
	    }
	}
	return 0;
}






