#include<stdio.h>
int rotation(int n, int L[n], int k)
{
	int i, j, N, p,count_l1;
	int L1[n];
	N=n;
	
	count_l1=0;
	p= k-1;
	label1:
	i=0;
	while(i<n) 
	{
	
		if(i==p)
		{
			L1[count_l1]=L[i];
			count_l1=count_l1+1 ;
			j=p;
			while(j<n-1)
			{
				L[j]=L[j+1];
				j++;
			}
			n--;
			i=i+k-1;
			if(n!=0)
			{
				p=i%n;
			}
			goto label1;
		}
		else
		{
			i++;			
		}
	}
	
	for(i=0; i<N;i++)
   	{
       		printf("%d ",L1[i]);
   	}
 }
 int main()
 {
 	int n;
 	printf("Enter len of list:\n");
 	scanf("%d", &n);
 	
 	int L[n];
 	printf("Enter list:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&L[i]);
	}
	
	int k;
	printf("Enter a number:\n");
	scanf("%d",&k);
		
 	rotation(n, L, k);
 	return 0;
 }
 
