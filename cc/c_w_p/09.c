// Time Complexity - O(n)
# include <stdio.h>
int main()
{
	int c, d;
	c=0;
	d=getchar();
	while(d != EOF)
	{
	c=c+1;
	printf("%d\n", d);
	d=getchar();
	}
	return 0;
}
