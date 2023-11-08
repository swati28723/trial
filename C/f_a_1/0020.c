// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d", &a);
int LD=a%10;
printf("Last digit of a given number is %d.\n", LD);
return 0;
}

