//Time Complexity - O(n)
//4.Take an list from the user as input and find duplicate elements in an list.
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter length of list: ");
    scanf("%d", &n);
    int l[n];
    printf("Enter %d numbers\n", n);
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &l[i]);
    }
printf("Duplicates in list: ");
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
	if (count==1)
	{
		printf("%d ", l[i]);
	}
			
}	
printf("\n");			
return 0;
}

    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
