//2.Take an list from the user as input and print the mean, median, and mode of the list
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, s=0;
    printf("Enter len of list: ");
    scanf("%d", &n);
    long* l=(long*)malloc(n*sizeof(int));
    printf("Enter %d numbers\n", n);
    for (int i=0; i<n; i++) 
    {
        scanf("%ld", &l[i]);
        s=s+l[i];
    }  
    int c=n/2, b=c-1;
    float median;
    if (n%2==0)
    {
    median=(l[c]+l[b])/2.0;
    }
    else
    {
    median=l[c];
    }
    int max=0, mode;	
    for (int i=0; i<n; i++)
	{	
		int count=0;
		for (int j=i+1; j<n; j++)
		{
			if (l[i]==l[j])
			{
				count++;
			
			}
		}
		if (count>max)
		{
			max=count;
			mode=l[i];
		}
				
	}	
    printf("Mean of the list is %d.\nMedian of the list is %.1f.\nMode of the list is %d.\n", (s/n), median, mode);
    free(l);
    return 0;
}
