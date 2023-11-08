/*
// pointers as function arguments - call by reference
#include <stdio.h>
void Increment(int x)// (int a)local variable, called function & formal argument
{
	//a=a+1;
	x=x+1;
}
int main()//calling function 
{
	int a;// local variable
	a = 10;
	Increment(a);//a=a+1, actual argument
	printf("a=%d\n", a);//why 10?
	
//-whenever we declare a variable inside the function then we call that variable a local variable because as such just using the variable name we can access that variable only inside same function in which we have declared the variable so these two a, this a in the function increment and this a iin the function main are actually not same the a the 'a' in the function icrement is another 'a' when main calls method increment and passes this a as argument to  the function then only the value of a is copied to this another a which is another variable local to the increment function
	return 0;
}
*/




#include <stdio.h>
void Increment(int a)
{
	a=a+1;
	printf("Address of variable a in increment = %d\n", &a);
}
int main()
{
	int a;
	a = 10;
	Increment(a);//a=a+1
	printf("Address of variable a in main = %d\n", &a);
	//printf("a=%d\n", a);
	return 0;
}





// call by reference
#include <stdio.h>
void Increment(int *p)
{
	*p = (*p) + 1;
}
int main()
{
	int a;
	a = 10;
	Increment(&a);
	printf("a = %d\n", a);
	return 0;
} 
*/





#include <stdio.h>
void Increment(int *p)
{
	*p = (*p) + 2;
}
int main()
{	
	int a=1;
	for (int i=0; i<10; i++)
	{
		printf("a = %d\n", a);
		Increment(&a);
	}
	return 0;
} 

