include <stdio.h>
int main() 
{
   int l, b, area;
   printf("Enter length & breadth: ");
   scanf("%d %d", &l, &b);
   area = l * b;
   printf("The area of four walls of a rectangular room is %d.",  area);
   return 0;
}
