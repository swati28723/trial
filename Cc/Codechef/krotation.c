#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        b[i]=0;
    }
    
    int k, i=0, j=0;
    scanf("%d", &k);
    while(i<n)
    {
        if (b[i]==0)
        {
            if(j==k-1)
            {
                printf("%d ", a[j]);
                b[j]=1;
                i++;
            }
            else
            {
                j++;
            }
        }
        else
        {
            j=j%n;
            i++;
        }
    }
    
}
