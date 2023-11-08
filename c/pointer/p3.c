/*//pointer types, pointer arithmatic in c
#include <stdio.h>
int main()
{	
	int a=1025;
	int *p;
	p=&a;
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);
	printf("Address = %d, value = %d\n", p+1, *(p+1));
	char *p0;
	p0=(char*)p;//typecasting
	printf("size of char is %d bytes\n", sizeof(char));
	printf("Address = %d, value = %d\n", p0, *p0);
	printf("Address = %d, value = %d\n", p0+1, *(p0+1));
	// 1025 = 00000000 00000000 00000100 00000001
	return 0;
}





#include <stdio.h>
int main()
{
	int a = 1025;
	int *p;
	p = &a;
	printf("size of integer is %d bytes\n", sizeof(int));	
	printf("Address = %d, value = %d\n", p, *p);
	// Void pointer - Generic pointer
	void *p0;
	p0 = p;
	printf("Address = %d\n", p0);
}





#include <stdio.h>
int main()
{
	int a;
	int *p;
	char *q;
	p=&a;
	//printf("%lu\n", sizeof(p));
	//printf("%lu\n", sizeof(q));
	printf("%lu\n", sizeof(p));	
	printf("%lu\n", sizeof(p));
	return 0;
}
*/




#include <stdio.h>
int main()
{
	int a;
	int *p;
	char q;
	char *e;
	p=&a;
	e=&q;
	printf("%lu\n",p);
	printf("%lu\n",p+1);
	printf("%lu\n",e);
	printf("%lu\n",e+1);
	return 0;
}






