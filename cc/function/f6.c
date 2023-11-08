#include <stdio.h>
int fun(int i)
{
	i++;
	printf("%d\n", i);
	return i++;
}
int main()
{
	int i=10;
	//int j=fun(fun(i));
	int j=fun(fun(i++));
	printf("%d\n", j);
	return 0;
}	
