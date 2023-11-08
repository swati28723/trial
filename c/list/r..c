
#include <stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
int a[1000];
for (int i=0; i<=n; i++)
{
int c=0;
for (int j=i; j>0; j=j/10)
{
c=c+1;
}
int s=0;
for (int k=i; k>0; k/10)
{
int r=k%10;
s=s+(r*r);
}
if (s==i)
{
a[i]=i;
}
}
return 0;
}





