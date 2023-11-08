// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int a, b, c;
printf("Enter 1st side of triangle:");
scanf("%d", &a);
printf("Enter 2nd side of triangle:");
scanf("%d", &b);
printf("Enter 3rd side of triangle:");
scanf("%d", &c);
int SP=(a+b+c)/2;
printf("Semiperimeter of triangle is %d.\n", SP);
return 0;
}

