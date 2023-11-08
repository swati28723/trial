//1.To create nested array & print sum, max,min.
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
