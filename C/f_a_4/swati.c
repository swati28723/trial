#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        char c[100];
        sprintf(c,"%d",a*b);
        printf("%s",c);
        
    }
	// your code goes here
	return 0;
}