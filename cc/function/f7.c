#include <stdio.h>
int reverse (int n, int l[n])
{
	
	int j=n-1;
	for (int i=0; i<n; i++)
    {
    printf("%d, ", l[j]);
    j=j-1;
    }
}

int main() 
{
    int n;
    printf("Enter len of list whatever you want: ");
    scanf("%d", &n);
    int l[n];
    printf("Enter %d number\n", n);
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &l[i]);
    }    
    printf("Reverse List=[");
    reverse(n, l);
    printf("\b\b]");
    printf("\n");

    return 0;
}
