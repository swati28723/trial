#include<stdio.h>
int main()
{
	int n, k, i, j, N, p,count_l1;
	int L[100];
	int L1[100];
	
	scanf("%d",&n);
	N=n;
	
	//printf("enter array");
	for(i=0; i<n; i++)
	{
		scanf("%d",&L[i]);
	}
	
	//enter k
	scanf("%d",&k);	
	
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
   	return 0;
 }
