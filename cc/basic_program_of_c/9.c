#include <stdio.h>
int main() 
{
   int h, b, area;
   printf("Enter  height & breadth: ");
   scanf("%d %d", &h, &b);
   area = h * b;
   printf("The area of paralelogram is %d.",  area);
   return 0;
}
