// Time Complexity - O(n)
# include <stdio.h>
int main()
{
	char c;
	int a;
	a=0;
	while((c=getchar()) != EOF)
	{
	if(c=='\n')
	{
	a=a+1;
	}
	}
	printf("%d\n", a);
	return 0;
}

