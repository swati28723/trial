#include <stdio.h>
int main()
{
    int a[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int n  = sizeof(a)/sizeof(a[0]);
    
    for (int i=0; i<n/2; i++)
    {
        int  value = a[i];
        int h = i;
        while(h > 0 && a[h-1] < value)
        {
            a[h] = a[h -1];
            h = h- 1;
        }
        a[h] = value;
    }
    
    for (int i=(n/2)-1; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            if (a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for (int i=0; i<n-1; i++)
    {
       int m_i = i;
        for (int j=i+1; j<n; j++)
        {
            if (a[j] < a[m_i])
            {
                m_i = j; 
            }
        }
        int temp = a[i];
        a[i] = a[m_i];
        a[m_i] = temp;
    }
    
    for (int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
