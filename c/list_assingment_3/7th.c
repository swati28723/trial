//Time Complexity - O(n^2)
#include <stdio.h>
int main()
{
	int n1;
	printf("Enter length of a1: ");
	scanf("%d", &n1);
	printf("Enter sorted list:\n");
	int a1[n1];
	for (int i=0; i<n1; i++)
	{
		scanf("%d", &a1[i]);
	}
	
	int n2;
	printf("Enter length of a2: ");
	scanf("%d", &n2);
	printf("Enter sorted list:\n");
	int a2[n2];
	for (int i=0; i<n2; i++)
	{
		scanf("%d", &a2[i]);
	}
	
	int a3[n1+n2], c=0;
	for (int i=0; i<n1; i++)
	{
		a3[c]=a1[i];
		c++;
	}
	
	for (int i=0; i<n2; i++)
	{
		a3[c]=a2[i];
		c++;
	}
	
	
	int a5[n1+n2], a4[n1+n2];
	int p=0, q=0;
	for (int i=0; i<n1+n2; i++)
	{
		int count=0;
		for (int j=i+1; j<n1+n2; j++)
		{
			if (a3[i]==a3[j])
			{
				count++;
			}
		}		
		if (count==0)
		{
			a4[q]=a3[i];
			q++;
		}
		else
		{
			a5[p]=a3[i];
			p++;
		}
	}
		
		
	
	printf("Union: ");
	for (int i=0; i<q; i++)
	{
		printf("%d ", a4[i]);
	}
	printf("\n");
	printf("Intersection: ");	
	
	for (int i=0; i<p; i++)
	{
		printf("%d ", a5[i]);
	}
	printf("\n");
	return 0;
}

		
