// Time Complexity - O(logn)
# include <stdio.h>
int main()
{
int lower, higher, step, F;
lower=0, higher=300, step=20;
while(lower<=higher)
{
F = (9/5 * lower) + 32;
printf("%3d\t%d\n", lower, F);
lower=lower+step;
}
return 0;
}
