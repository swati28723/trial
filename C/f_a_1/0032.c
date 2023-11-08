// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int a, b;
printf("Enter number a:");
scanf("%d", &a);
printf("Enter number b:");
scanf("%d", &b);
int x=a%b;
int y=a-x;
printf("The number closest to (but less than) a which is completely divisible by b is %d.\n", y);
return 0;
}


