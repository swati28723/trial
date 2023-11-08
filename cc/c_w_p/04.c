// Time Complexity - O(log n)
# include <stdio.h>
int main()
{
	int lower;
	for (lower=0; lower<=300; lower=lower+20)
	{
	printf("%3d\t%f\n", lower, (5.0*(lower-32)/9.0));
	}
	return 0;
}
