// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int a, b;
printf("Enter a=");
scanf("%d", &a);
printf("Enter b=");
scanf("%d", &b);
int A=a+b;
int S=a-b;
int M=a*b;
int D=a/b;
printf("Addition of given two numbers is %d.\nSubstraction of given two numbers is %d.\nMultiplication of given two numbers is %d.\nDivision of given two numbers is %d.\n", A, S, M, D);
return 0;
}
