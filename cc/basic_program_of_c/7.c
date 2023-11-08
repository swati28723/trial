#include <stdio.h>
int main() 
{
   int a, b, product;
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);
   product = a * b;
   printf("The product of %d and %d is %d.", a, b, product);
   return 0;
}
