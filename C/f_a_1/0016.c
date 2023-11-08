// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int s;
printf("Enter side length of cube:");
scanf("%d", &s);
int LSA=4*(s*s);
int TSA=6*(s*s);
printf("Lateral surface area of cube is %d.\nTotal surface area is %d.\n", LSA, TSA);
return 0;
}

