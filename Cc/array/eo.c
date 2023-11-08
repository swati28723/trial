/*//1.to print n even, odd numbers from 1 to n.
#include <stdio.h>
int main()
{
int n, e=2, o=1;
scanf("%d", &n);
int even[n], odd[n];
for (int i=0; i<n; i++)
{
even[i]=e;
odd[i]=o;
e=e+2;
o=o+2;
}
printf("Even:");
for (int i=0; i<n; i++)
{
printf("%d ", even[i]);
}
printf("\n");
printf("Odd:");
for (int i=0; i<n; i++)
{
printf("%d ", odd[i]);
}
printf("\n");
return 0;
}
*/

//2.print n even, odd numbers from 1 to n.
#include <stdio.h>
int main()
{
int n, e=0, o=0;
scanf("%d", &n);
int even[n], odd[n];
for (int i=1; i<=n*2; i++)
{
if (i%2==0)
{
even[e]=i;
e++;
}
else
{
odd[o]=i;
o++;
}
}
printf("Even:");
for (int i=0; i<n; i++)
{
printf("%d ", even[i]);
}
printf("\n");
printf("Odd:");
for (int i=0; i<n; i++)
{
printf("%d ", odd[i]);
}
printf("\n");
return 0;
}





















































































































