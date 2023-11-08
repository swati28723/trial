#include <stdio.h>
#include <string.h>
int main()
{
int n, p, l=13;
scanf("%d", &n);
int m=n;
char s[100];
int a[]= {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
char b[][3]={"M", "CM", "D","CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
for (int i=0; i<l; i++)
{
	if (n>=a[i])
	{
		p=n/a[i];
	for (int j=0; j<p; j++)
	{
		strcat(s,b[i]);
	}
	}
	n=n%a[i];
	
        if (n==0)
	{
		i=i+l;
	}
  
}
printf("Roman equivalent of %d is %s.\n", m, s);
return 0;
}


	
