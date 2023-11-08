#include <stdio.h>
int main()
{
int n, i, c=0;
printf("Enter a number: ");
scanf("%d", &n);
if (n<=0)
{
printf("Error: entered number is less than or equal to zero.\n");
return 0;
}
int l[100];
for (i=1; i<=n/2; i++)
{
if (n%i==0)
{
l[c]=i;
c=c+1;
}
}
printf("Factors of %d=[", n);
for (int j=0; j<c; j++)
{
printf("%d, ", l[j]);
}
printf("\b\b]\n");
return 0;
}
