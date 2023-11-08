/*
//by priy@nka di
#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    int c=0;
    int array[n];
    for (int i=1; i<=n; i++)
    {
        array[c]=i;
        c++;
    }
    for (int i=0; i<c; i++)
    {
        printf("%d\n", array[i]); 
    }
    return 0;
}









#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    int c=0;
    int array[n];
    //int* ptr=array;
    int *ptr = &array[0];
    for (int i=1; i<=n; i++)
    {
        *(ptr+c)=i;
        c++;
    }
    for (int i=0; i<c; i++)
    {
        printf("%d\n", *(ptr+i));
    }
    return 0;
}





#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    int array[n];
    int* ptr=array;
    for (int i=0; i<n; i++)
    {
        *(ptr+i)=i+1;
    }
    for (int i=0; i<n; i++)
    {
        printf("%d\n", *(ptr+i));
    }
    return 0;
}
*/






#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int array[n];
    int* ptr=(int*)malloc(n*sizeof(int));
    for (int i=0; i<n; i++)
    {
        *(ptr+i)=i+1;
    }
    for (int i=0; i<n; i++)
    {
        printf("%d\n", *(ptr+i));
    }
    free(ptr);
    return 0;
}

