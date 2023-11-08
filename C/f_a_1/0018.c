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
int LSA=2*h*(l+b);
int TSA=2*((l*b)+(b*h)+(l*h));
printf("Lateral surface area of cuboid is %d.\nTotal surface area of cuboid is %d.\n", LSA, TSA);
return 0;
}

