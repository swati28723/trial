// Time Complexity - O(1)
#include <stdio.h>
int main()
{
int n;
long s=0;
scanf("%d", &n);
for (int i=1; i<=n*2; i=i+1)
{
if (i%2==0)
{
s=s+i;
}
}
printf("%lu\n", s);
}
