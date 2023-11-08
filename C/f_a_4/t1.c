#include <stdio.h>
void fun(int n, int m, int mat[][m])
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n=3, m=3; 
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    fun(n, m, mat);
    return 0;
}
// Time complexity - O(n*m)
