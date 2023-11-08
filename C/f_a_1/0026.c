// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int x, y;
printf("Enter Rs. you have x:");
scanf("%d", &x);
printf("Enter cost of a book y:");
scanf("%d", &y);
int bwcb=x/y;
printf("We can buy %d books.\n", bwcb);
return 0;
}
