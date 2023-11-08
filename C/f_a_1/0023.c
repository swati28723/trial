// Time Complexity - O(1)
#include <stdio.h>
int main()
{
int m, d;
printf("Enter MRP:");
scanf("%d", &m);
printf("Enter discount d:");
scanf("%d", &d);
int SP=m-d;
printf("Selling price of a product is %d.\n", SP);
return 0;
}

