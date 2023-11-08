#include <stdio.h>
int main()
{
int array1[]={1,2,3,4,5};
int array2[]={6,7,8,9,10};
int n1=sizeof(array1)/sizeof(array1[0]);
int n2=sizeof(array1)/sizeof(array1[0]);
int array3[n1+n2];
int c=0;
for (int i=0; i<n1; i++)
{
array3[c]=array1[i];
c++;
}
for (int i=0; i<n2; i++)
{
array3[c]=array2[i];
c++;
}
printf("merged array:");
for (int i=0; i<n1+n2; i++)
{
printf("%d ", array3[i]);
}
printf("\n");
return 0;
}
