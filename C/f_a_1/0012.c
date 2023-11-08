// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int s;
printf("Enter side of square:");
scanf("%d", &s);
int A=s*s;
int P=4*s;
printf("Area of a square is %d.\nPerimeter of square is %d.\n", A, P);
return 0;
}
