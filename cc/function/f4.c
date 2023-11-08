/*//swapping
#include <stdio.h>
void swap(int a, int b)
{
	int t=a;
	a=b;
	b=t;
	printf("a=%d\nb=%d\n", a, b);
}
int main()
{
	int a, b;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	swap(a, b);
}




#include <stdio.h>
void swap(int a, int b)
{
	a=20;
	b=10;
}
int main()
{
	int a=10, b=20;
	swap(&a, &b);//calling by value
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}





#include <stdio.h>
void swap(int a, int b)
{
	a=20;
	b=10;
	printf("a=%d\nb=%d\n", a, b);	
}
int main()
{
	int a=10, b=20;
	swap(a, b);//calling by value
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}






//by Pr@dnya
#include <stdio.h>
void swap(int *a, int *b)
{
	int t=*a ;
	*a=*b;
	*b=t;
}
int main()
{
	int a=10, b=20;
	swap(&a, &b);//calling by value
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}




#include <stdio.h>
int main()
{
	int a[]={5, 4, 3, 2, 5};
	for (int i=0; i<5; i++)
	{
		//printf("%d\n", *(a)+i);
		//printf("%d\n", (*a)++);	
		printf("%d\n", *(a+i));	
	}
}





#include <stdio.h>
int main()
{
	int a[]={1,2,3,4,5,};
	int *p=a;
	int *q=&a[0];
	printf("%p\n%d\n", a, *a);
	printf("%p\n%d\n", p, *p);
}*/


//pre-increment
#include <stdio.h>
int main()
{
	int a=6, b=5;
	printf("%d %d %d %d", a++, b++, a--, b--);
}
	
