#include <stdio.h>
int main()
{
    int n, k, c=0;
    scanf("%d%d", &n, &k);
    int a[n], b[n];
    
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==k)
            {
                b[c]=a[i];
                b[c+1]=a[j];
                c=c+2;
            }
        }
    }    
    
    for (int i=0; i<c; i++)
    {
        int count=0;
        for (int j=i+1; j<c; j++)
        {
            if (b[i]==b[j])
            {
                count++;
            }
        }
        if (count==0)
        {
            printf("%d ", b[i]);
        }
    }
    return 0;
}
