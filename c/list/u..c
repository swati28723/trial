#include <stdio.h>
int main()
{
int n, s=0;
printf("Enter a number: ");
scanf("%d", &n);
int a[n];
for (int i=0; i<n; i++)
{
scanf("%d", &a[i]);
s=s+a[i];
}
printf("list made by user=[");
for (int i=0; i<n; i++)
{
printf("%d, ", a[i]);
}
printf("\b\b]\n");

