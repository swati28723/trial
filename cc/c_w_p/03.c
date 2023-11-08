// Time Complexity - O(log n)
# include <stdio.h>
int main()
{
	int lower, c;
	for (lower=0; lower<=300; lower=lower+20)
	{c=(5*(lower-32)/9);
	printf("%3d\t%d\n", lower, c);
	}
	return 0;
}
