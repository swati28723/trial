//array assingnment-2
/*//1.To create nested array & print sum, max,.
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int l[m][n];
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &l[i][j]);
        }
    }
    int s=0, max=l[0][0], min=l[0][0];
    printf("l=[ ");
    for (int i=0; i<m; i++)
    {
        printf("[");
        for (int j=0; j<n; j++)
        {
            printf("%d, ", l[i][j]);
            s=s+l[i][j];
            if (l[i][j]>max)
            {
            	max=l[i][j];
            }
            else
            {
            	if (min>l[i][j])
            	{
            		min=l[i][j];
            	}
            }
        }
        printf("\b\b] ");
    }
    printf("]\n");
    printf("Sum of all elements in matrix is %d.\nMaximum in matrix is %d.\nMinimum in matrix is %d.\n", s, max, min);
    return 0;
}
*/

//2.Row and Column with Maximum
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int l[m][n], r[n], b[n];
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &l[i][j]);
        }
    }
    int max=l[0][0], c;
    printf("l=[ ");
    for (int i=0; i<m; i++)
    {
        printf("[");
        for (int j=0; j<n; j++)
        {
            printf("%d, ", l[i][j]);
            if (l[i][j]>max)
            {	
            	max=l[i][j];
            	c=l[i][j];
            }
        }
        printf("\b\b] ");
    }
    printf("]\n");
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
		r[j]=l[i][j];	
		b[j]=l[i][j];
        }
    }
    for (int i=0; i<1; i++)
        {
            printf("%d, ", r[i]);
            printf("%d, ", b[i]);
        }
    printf("\n");
    printf("ro");
    return 0;
}
    


/*
//3.Transpose Matrix.
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int l[m][n], a[m][n];
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &l[i][j]);
        }
    }
    printf("l=[ ");
    for (int i=0; i<m; i++)
    {
        printf("[");
        for (int j=0; j<n; j++)
        {
            printf("%d, ", l[i][j]);
        }
        printf("\b\b] ");
    }
    printf("]\n");
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            a[j][i]=l[i][j];
        }
    }
    printf("a=[ ");
    for (int i=0; i<m; i++)
    {
        printf("[");
        for (int j=0; j<n; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("\b\b] ");
    }
    printf("]\n");
    return 0;
}
  */ 











































































