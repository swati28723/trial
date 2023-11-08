#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n, k;
	    scanf("%d%d", &n, &k);
	    int a[n];
	    for (int i=0; i<n; i++)
	    {
	        scanf("%d", &a[i]);
	    }
	    int min;
	    for (int i=0; i<n; i++)
	    {
	        for (int j=i+1; j<n; j++)
	        {
	            if (a[i]>a[j])
	        {
	            min=a[i]-a[j];
	            if (min==k)
	            {
	                int temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	                break;
	            }
	            else
	            {
	                min=a[j]-a[i];
	                if (min==k)
    	            {
    	                int temp=a[i];
    	                a[i]=a[j];
    	                a[j]=temp;
    	                break;
    	            }
	            }
	        }
	        }
	        
	    }
	    for (int i=0; i<n; i++)
	    {
	        printf("%d ", a[i]);
	    }
	    printf("\n");
	}
	return 0;
}

