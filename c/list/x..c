#include <stdio.h>
int main()
{
int n, i, c;
printf("Enter a number: ");
scanf("%d", &n);
int l[n];
i=2;
for (c=0; c<n; c++)
{
l[c]=i;
i=i+2;
}
printf("even numbers=[");
for (int j=0; j<n; j++)
{
printf("%d, ", l[j]);
}
printf("\b\b]\n");
return 0;
}
