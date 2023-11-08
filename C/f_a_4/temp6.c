
#include <stdio.h>
int isprime(int n)
{

    int i, flag=0;
    for (i=2; i*i<n; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int * findPrime(int *x, int n)
{
    int b[n];
    for (int i=0; i<n; i++)
    {
        b[i]=isprime(x[i]);
    }
    return b;
}

int main()
{
    int a[]={4, 6, 7, 8, 5};
    int *b;
    b = findPrime(a, 5);
    for (int i=0; i<5; i++)
    {
        if (b[i]==0)
        {
            printf("%d is not prime", b[i]);
        }
        else
        {
            printf("%d is  prime", b[i]);
          
        }
    }
    return 0;
}

