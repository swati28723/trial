/*#include <stdio.h>
#include <limits.h>
int main()
{
	int a = INT_MIN;
	int b = INT_MAX;
	printf("%d %d\n", a, b);

	unsigned int c = 0;
	unsigned int d = UINT_MAX;
	printf("%u %u\n", c, d);

	short unsigned int e = 0;
	short unsigned int f =USHRT_MAX;
	printf("%u %u\n", e, f);

	return 0;
}


#include <stdio.h>
int main()
{
	char a = 100;
	printf("%c\n", a);
	return 0;
}
*/

#include <stdio.h>
int main()
{
	float a = 3.1415926535897932;
	double b = 3.1415926535897932;
	long double c = 3.141592653589793213456;
	
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	
	printf("%.16f\n", a);
	printf("%.16f\n", b);
	printf("%.21Lf\n", c);
	
	return 0;
}
	
