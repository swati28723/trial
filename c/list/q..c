#include <stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
int a[n];
printf("Enter maximum temperature of %d days.\n", n);
for (int i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
printf("Max=[");//list of maximum temperature.
int max=a[0], s=0, Htd=0;
for (int i=0; i<n; i++)
{
printf("%d, ", a[i]);
s=s+a[i];
if (a[i]>max)
{
max=a[i];
Htd=i+1;
}
}
printf("\b\b]");
printf("\n");
printf("Mean maximum temperature in the month is %d.\nHighest maximum temperature is %d.\nHottest day number of the month is %d.\n", (s/n), max, Htd);
int b[n];
printf("Enter minimum temperature of %d days.\n", n);
for (int i=0; i<n; i++)
{
scanf("%d", &b[i]);
}
printf("Min=[");//List of minimum temperature.
int min=a[0], ss=0, Ltd=0;
for (int i=0; i<n; i++)
{
printf("%d, ", b[i]);
ss=ss+b[i];
if (b[i]<min)
{
min=b[i];
Ltd=i+1;
}
}
printf("\b\b]");
printf("\n");
printf("Mean minimum temperature in the month is %d.\nLowest minimum temperature is %d.\nColdest day number of the month is %d.\n", (ss/n), min, Ltd);
return 0;
}





/*
#include <stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
int a[n];
int* ptr=a;
printf("Enter maximum temperature of %d days.\n", n);
for (int i=0; i<n; i++)
{
scanf("%d", & *(ptr+i));
}
printf("Max=[");//list of maximum temperature.
int max=a[0], s=0, Htd=0;
for (int i=0; i<n; i++)
{
printf("%d, ", *(ptr+i));
s=s+*(ptr+i);
if (*(ptr+i)>max)
{
max=*(ptr+i);
Htd=i+1;
}
}
printf("\b\b]");
printf("\n");
printf("Mean maximum temperature in the month is %d.\nLowest maximum temperature is %d.\nHottest day number of the month is %d.\n", (s/n), max, Htd);
int b[n];
int* qtr=b;
printf("Enter minimum temperature of %d days.\n", n);
for (int i=0; i<n; i++)
{
scanf("%d", & *(qtr+i));
}
printf("Min=[");//List of minimum temperature.
int min=a[0], ss=0, Ltd=0;
for (int i=0; i<n; i++)
{
printf("%d, ", *(qtr+i));
ss=ss+*(qtr+i);
if (b[i]<min)
{
min=*(qtr+i);
Ltd=i+1;
}
}
printf("\b\b]");
printf("\n");
printf("Mean minimum temperature in the month is %d.\nHighest minimum temperature is %d.\nColdest day number of the month is %d.\n", (ss/n), min, Ltd);
return 0;
}
*/






