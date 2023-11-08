#include <stdio.h>

int main()
{
    int n, p=1;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
    	if (i==0)
    	{
    		printf("*\n");
    	}
    	else if (i==n-1)
    	{
    		for (int j=0; j<n; j++)
    		{
    			printf("* ");
    		}
    	}
    	else
    	{
    		printf("*");
    		for (int k=0; k<p; k++)
    		{
    			printf(" ");
    		}
       		printf("*\n"); 
       		p+=2;		
    	}
    	
    }
    printf("\n");
    return 0;
}
