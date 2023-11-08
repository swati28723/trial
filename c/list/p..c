/*
#include <stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
int a[n];
for (int i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
printf("list=[");
int min=a[0], max=0, s=0;
for (int i=0; i<n; i++)
{
printf("%d, ", a[i]);
s=s+a[i];
if (a[i]>max)
{
max=a[i];
}
else
{
if (min>a[i])
{
min=a[i];
}
}
}
printf("\b\b]");
printf("\n");
printf("Mean weight of the babies is %d.\nMaximum of the weights is %d.\nMinimum of the weights is %d.\n", (s/n), max, min);
return 0;
}
*/




#include <stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
int a[n];
int *ptr=a;
for (int i=0; i<n; i++)
{
scanf("%d", &*(ptr+i));
}
printf("list=[");
int min=a[0], max=0, s=0;
for (int i=0; i<n; i++)
{
printf("%d, ", *(ptr+i));
s=s+*(ptr+i);
if (*(ptr+i)>max)
{
max=*(ptr+i);
}
else
{
if (min>*(ptr+i))
{
min=*(ptr+i);
}
}
}
printf("\b\b]");
printf("\n");
printf("Mean weight of the babies is %d.\nMaximum of the weights is %d.\nMinimum of the weights is %d.\n", (s/n), max, min);
return 0;
}







