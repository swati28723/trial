#include <stdio.h>
int main()
{
int l, n, c;
printf("Enter a list: ");
scanf("%d", &l);
printf("Enter a number: ");
scanf("%d", &n);
c=0;
for (int i=0; i<len(l); i++)
{
if (l[i]==n)
{
c=c++;
}
}
if (c>0)
{
printf("%d is exists in list.\n", n);
}
return 0;
}
