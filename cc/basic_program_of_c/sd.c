# include  <stdio.h>  
int main() 
{
   int r, area, perimeter; 
   float pie;
   printf("Enter radius: ");
   scanf("%d", &r); 
   pie = 3.14;
   area = pie * (r * r); 
   perimeter = 2 * pie * r; 
   printf("The area and perimeter of circular plot is %d and %d  .", area, perimeter);
   return 0;
}
