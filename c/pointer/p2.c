/*
//Working with pointers.
#include <stdio.h>
int main()
{
	int a;
	int *p;
	p=&a;//&a=address of a
	printf("%lu\n", p);//140722683231468
	printf("%p\n", *p);// *p-value at address pointed by p(it gives error because we not initialised a. So, first we have need to initialised a=any value)
	return 0;
}




#include <stdio.h>
int main()
{
	int a;
	int *p;
	a=10;
	p=&a;
	printf("%lu\n", p);
	printf("%d\n", *p);
	printf("%lu", &a);
	return 0;
}





#include <stdio.h>
int main()
{
	int a;
	int *p;
	a=10;
	p = &a; // &a = address of a
	printf("a=%d\n",a);
	*p=12; // dereferencing
	printf("a=%d\n",a);
}






#include <stdio.h>
int main()
{	
	int a;
	int *p;
	a=10;
	p=&a;// &a = address of a
	printf("a=%d\n", a);
	printf("Address of p is %lu\n", p);
	printf("Value at p is %d\n", *p);
	int b=20;
	*p=b;//the address in p change to point b
	printf("Address of p is %lu\n", p);
	printf("Value at p is %d\n", *p);
	return 0;
}
*/





#include <stdio.h>
int main()
{
	int a=10;
	int *p;// or we can write it as int* p
	p=&a;
	// pointer arithmetic
	printf("Address p is %lu\n", p);//p is 140724973165132
	printf("value at address p is %d\n", *p);//
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("Address p+1 is %lu\n", p+1);//p+1 is 140724973165136
	printf("%lu\n", p+2);//p+2 is 140724973165140
	//printf("value at address p+1 is %d\n", *(p+1));//this line gives us a negative value because we do not have an integer allocated to this particular memory address.
	return 0;
}
