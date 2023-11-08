// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int a, b;
printf("Enter number a:");
scanf("%d", &a);
printf("Enter number b:");
scanf("%d", &b);
int R=a%b;
printf("Remainder of a given number is %d.\n", R);
return 0;
}

