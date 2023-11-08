/*#include <stdio.h>
int multiply(int, int);
int sum(int a, int b)
{
	int f=multiply(a, b)+10;
	return f;
}
int multiply(int c, int d)
{
	return c*d;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", sum(a, b));
	return 0;
}
*/




//We can also write it as write in the below.but its compolsary to declare function before main fuction. we can write function's dfinition anywhere.
#include <stdio.h>
int multiply(int, int);
int sum(int, int);
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", sum(a, b));
	return 0;
}
int sum(int a, int b)
{
	int f=multiply(a, b)+10;
	return f;
}
int multiply(int c, int d)
{
	return c*d;
}


