#include <stdio.h>
int mergedlist(int n1, int l1[n1], int n2, int l2[n2], int l3[n1+n2])
{
	
	int c=0;
	for (int i=0; i<n1; i++)
	{
		l3[c]=l1[i];
		c++;
	}
	
	for (int i=0; i<n2; i++)
	{
		l3[c]=l2[i];
		c++;
	}
	
	int temp;
	for (int i=0; i<n1+n2; i++)
	{
		for (int j=i+1; j<n1+n2; j++)
		{
			if (l3[i]>l3[j])
			{
				temp=l3[i];
				l3[i]=l3[j];
				l3[j]=temp;
			}
		}
	}
}
int main()
{
	int n1;
	printf("Enter len of list:\n");
	scanf("%d", &n1);
	int l1[n1];
	printf("Enter a sorted list:\n");
	for (int i=0; i<n1; i++)
	{
		scanf("%d", &l1[i]);
	}
	
	int n2;
	printf("Enter len of list:\n");
	scanf("%d", &n2);
	int l2[n2];
	printf("Enter a sorted list:\n");
	for (int i=0; i<n2; i++)
	{
		scanf("%d", &l2[i]);
	}
	
	int l3[n1+n2];
	
	mergedlist(n1, l1, n2, l2, l3);
	
	printf("Sorted merged list: ");
	for (int i=0; i<n1+n2; i++)
	{
		printf("%d ", l3[i]);
	}
	return 0;
}

