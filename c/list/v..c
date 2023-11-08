#include <stdio.h>
int main()
{
char a[100];
int i, n;
scanf("%d", &n);
for (i=0; i<n; i++)
{
scanf("%c", &a[i]);
}
a[i]='\0';
printf("%s", a);
return 0;
}
