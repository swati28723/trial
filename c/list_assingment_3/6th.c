//Time Complexity - O(n^2)
#include <stdio.h>
int main()
{
	int n, s, cs=0;
	printf("Enter sum: ");
	scanf("%d", &s);
	printf("Enter len of list: ");
	scanf("%d", &n);
	int l[n];
	for (int i=0; i<n; i++)
		{
			scanf("%d", &l[i]);
		}
	printf("The first contiguous sublist whose sum is %d is : ", s);
	for (int i=0; i<n; i++)
	{
		cs=l[i];
		if (cs==s)
		{
			printf("%d", l[i]);
			break;
		}
	else
		{
			for (int j=i+1; j<n; j++)
			{
				cs=cs+l[j];
				if (cs==s)
				{
							
					for (int k=i; k<j+1; k++)		
					{
						printf("%d ", l[k]);
					}
					break;
				}
			}
			if (cs == s)
				{
		        break;
		    }
		}
	}
	printf("\n");	
	return 0;
}

