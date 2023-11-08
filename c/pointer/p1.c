/*
//Introduction to pointers
#include <stdio.h>
int main()
{
	int a;
	int *p;
	printf("%p\n", p);
}
//The program gives error because p is not initialised and we can't use it without initialising. We need to initialised p=&a.
*/




#include <stdio.h>
int main()
{
	int a;//normal declaration
	int *p;//pointer declaration with asterik(*)
	p=&a;//gives address of a
	printf("%lu\n", p);//140730587874588
	return 0;
}




/*
#include <stdio.h>
int main()
{
	int a; 
	int *p;
	p=&a;
	a=5;
	printf("%lu\n", p);//140722454230300
	printf("%lu\n", &a);//140722454230300
	printf("%lu\n", &p);//140722454230304 
	printf("%d\n", *p);//5 dereferencing
	*p=8;
	printf("%d\n", a);//8
	return 0;
}






#include <stdio.h>
int main()
{
	int a;//integer
	int *p;//pointer to integer
	char c;//character
	char *p0;//pointer to character
	double d;//double
	double *p1;//pointer to double
	p=&a; 
	a=8;
	printf("%d\n", *p);
	return 0;
}
*/
