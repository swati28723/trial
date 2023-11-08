# include <stdio.h>
int main() 
{
   int s,area,perimeter;
   printf("Enter side: ");
   scanf("%d",&s);
   area = s * s;
   perimeter= 4 * s;
   printf("The area and perimeter of square is %d and %d  .",  area,perimeter);
   return 0;
}
