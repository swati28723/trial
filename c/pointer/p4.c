//pointer to pointer
#include <stdio.h>
int main ()
{
	int x = 5;
	int *p = &x;// or int* p
	*p = 6;
	int **q = &p;//or int**q - this variable q store address of p and we give two asterik(**) because we give pointer to pointer
	int ***r = &q;//or int*** r
	printf("%d\n", *p);//6
	printf("%d\n", *q);//1901494044
	printf("%d\n", *(*q));// or **q - 6
	printf("%d\n", *(*r));// or **r - 1901494044
	printf("%d\n", *(*(*r)));// or ***r - 6
	***r = 10;
	printf("x = %d\n", x);// 10
	**q = *p+2;
	printf("x = %d\n", x);// 12
	return 0;
}
