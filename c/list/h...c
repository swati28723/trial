//Time Complexity - O(n)
#include <stdio.h>
int main()
{
int n, a;
printf("Enter len of list: ");
scanf("%d", &n);
printf("Enter a: ");
scanf("%d", &a);
int l[n];
for (int i=0; i<n; i++)
{
scanf("%d", &l[i]);
}
int high=n-1, guess=0, mid=0, low=0;
while (low<=high)
{
mid=
