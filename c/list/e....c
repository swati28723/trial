//Time Complexity - O(m*n)
//To create nested array.
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
    return 0;
}
