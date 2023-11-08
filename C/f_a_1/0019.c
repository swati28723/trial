// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int l, b, h;
printf("Enter length of cuboid:");
scanf("%d", &l);
printf("Enter breadth of cuboid:");
scanf("%d", &b);
printf("Enter height of cuboid:");
scanf("%d", &h);
int V=l*b*h;
printf("Volume of a cuboid is %d.\n", V);
return 0;
}

