#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        char a[n];
        for (int j=0; j<n; j++)
        {
            scanf(" %c", &s[j]);
            if (s[j]=='A')
            {
                a[j]='T';
            }
            else if (s[j]=='T')
            {
                a[j]='A';
            }
            else if (s[j]=='C')
            {
                a[j]='G';
            }
            else
            {
                a[j]='C';
            }
        }
        for (int i=0; i<n; i++)
        {
            printf("%c", a[i]);
        }
        printf("\n");
    }
	return 0;
}

           

