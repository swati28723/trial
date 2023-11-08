// Time Complexity - O(logn)
# include <stdio.h>
int main()
{
int lower, higher, step, c;
lower=0, higher=300, step=20;
while(lower<=higher)
{c=(5*(lower-32)/9);
printf("%3d\t%d\n", lower, c);
lower=lower+step;
}
return 0;
}
