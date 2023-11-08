#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d", &t);
	while (t--)
	{
	    int n;
	    scanf("%d", &n);
	    int a[n];
	    int max=0;
	    for (int i=0; i<n; i++)
	    {
	        scanf("%d", &a[i]);
	    }
	    for (int i=0; i<n; i++)
	    {
	        int c=0;
	        for (int j=0; j<n; j++)
	        {
	            if (a[i]==a[j])
	            {
	                c++;
	            }
	        }
	        if (c>max)
	        {
	            max=c;
	        }
	    }
	    printf("%d\n", n-max);
	}
	return 0;
}

