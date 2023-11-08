// Time Complexity - O(1)
#include <stdio.h>
int main()
{
int a, b, c, d;
int m=0, sm=0, m1=0, sm1=0;
printf("Enter 4 numbers: ");
if (scanf("%d%d%d%d", &a, &b, &c, &d) !=4)
{
printf("Error: Invalid input.\n");
return 0;
}
if (a>b)
{
m=b;
sm=a;
}
else
{
m=a;
sm=b;
}
 
if (c>d)
{
m1=d;
sm1=c;
}
else
{
m1=c;
sm1=d;
}

if (m>m1)
{
if (m>sm1)
{
printf("Third max is %d.\n", sm1);
}
else 
{
printf("Third max is %d.\n", m);
}
}
else
{
if (m1>sm)
{
printf("Third max is %d.\n", sm);
}
else
{
printf("Third max is %d.\n", m1);
}
}
return 0;
}
