/*#include <stdio.h>

int main(void) 
{
    int t=0, n, y, q;
    scanf("%d", &t);
    for (int i=t; i>0; i--)
    {
        scanf("%d", &n);
        int l[n];
        int a[n];
        for (int j=0; j<n; j++)
        {
            scanf("%d", &y);
            l[j]=y;
        }
        q=l[0];
        for (int k=0; k<n; k++)
        {
            a[k]=q;
            q++;
        }
        if (l==a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	return 0;
}
*/
#include <stdio.h>

int main(void) 
{
    int t = 0, n, y, q;
    scanf("%d", &t);
    for (int i = t; i > 0; i--)
    {
        scanf("%d", &n);
        int l[n];
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &y);
            l[j] = y;
        }
        q = l[0];
        for (int k = 0; k < n; k++)
        {
            a[k] = q;
            q++;
        }

        int equal = 1;
        for (int k = 0; k < n; k++)
        {
            if (l[k] != a[k])
            {
                equal = 0;
                break;
            }
        }

        if (equal)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}


