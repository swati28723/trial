// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int l, w;
printf("Enter length of rectangle:");
scanf("%d", &l);
printf("Enter width of rectangle:");
scanf("%d", &w);
int A=l*w;
int P=2*(l+w);
printf("Area of a rectangle is %d.\nPerimeter of rectangle is %d.\n", A, P);
return 0;
}
