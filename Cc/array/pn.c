#include <stdio.h>
int main()
{
int n, p=0, N=0;
scanf("%d", &n);
int positive[n], negative[n], l[n];
for (int i=0; i<n; i++)
{
scanf("%d", &l[i]);
}
for (int i=0; i<n; i++)
{
if (l[i]>0)
{
positive[p]=l[i];
p++;
}
else
{
negative[N]=l[i];
N++;
}
}
printf("Positive:");
for (int i=0; i<p; i++)
{
printf("%d ", positive[i]);
}
printf("\n");
printf("Negative:");
for (int i=0; i<N; i++)
{
printf("%d ", negative[i]);
}
printf("\n");
return 0;
}
