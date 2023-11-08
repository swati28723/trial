// Time Complexity - O(1)
# include <math.h>
# include <stdio.h>
int main()
{
int i;
float t;
printf("Enter Time period of a simple pendulum:");
scanf("%f", &t);
printf("Enter length of the simple pendulum:");
scanf("%d", &i);
float G=(4*(pow(3.14, 2))*i)/(pow(t, 2));
printf("The accleration due to gravity is %.2f.\n", G );
return 0;
}

