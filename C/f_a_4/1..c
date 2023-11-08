// Time Complexity - O(1)
#include <stdio.h>
int main()
{
int n;
long s=0;
scanf("%d", &n);
for (int i=1; i<=n; i=i+1)
{
s=s+i;
}
printf("%lu\n", s);
}
