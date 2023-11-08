// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int a, b, c;
printf("Enter a=:");
scanf("%d", &a);
printf("Enter b=:");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("a=%d\nb=%d\n", a, b);
return 0;
}

