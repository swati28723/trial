#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int n = strlen(a);
    
    for (int i=0; i<n; i++)
    {
        char value = a[i];
        int h = i;
        while(h > 0 && a[h-1] < value)
        {
            a[h] = a[h -1];
            h = h- 1;
        }
        a[h] = value;
    }
    
   printf("%s", a);
}

