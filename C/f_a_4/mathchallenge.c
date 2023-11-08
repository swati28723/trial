#include <stdio.h>
int main()
{
	int n , number = 1, temp;
	scanf("%d", &n);
	int i=0;
	while(i<n)
	{
		int c = 0; 
		for (int j=1; j<=number; j++)
		{
			if (number % j == 0)
			{
				c++;
			}
		}
		if (c==2)
		{
			temp = number;
			i++;
		}
		number++;
	}
	printf("%d", temp);
	return 0;
}
