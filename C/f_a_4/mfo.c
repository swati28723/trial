#include <stdio.h>

int main() 
{
    int a, b, c, d, e;
    int max;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    if (a == b)
    {
        c1++;
    }
    if (a == c)
    {
        c1++;
    }
    if (a == d)
    {
        c1++;
    }
    if (a == e)
    {
        c1++;

    }
    
    if (b == c)
    {
        c2++;
    }
    if (b == d)
    {
        c2++;
    }
    if (b == e)
    {
        c2++;
	}
    if (c == d)
    {
        c3++;
    }
    if (c == e)
	{
		c3++;
	}
	
    if (d == e)
    {
        c4++;
	}
	
    if (c1 > 0)
    {
    printf("Maximum occurring number: %d\n", max);
    }
    else if (c2 > 0)
    {
    printf("Maximum occurring number: %d\n", max);
	}
    else if (c3 > 0)
    {
    printf("Maximum occurring number: %d\n", max);
    }
    else if (c4 > 0)
    {
    printf("Maximum occurring number: %d\n", max);
    }
    else
    {
        printf("The numbers was not repeated.\n");
	}

    return 0;
}

