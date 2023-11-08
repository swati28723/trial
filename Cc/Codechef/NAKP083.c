#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int k, x, ans;
	    scanf("%d%d", &k, &x);
	    ans = (k*7)-x;
	    printf("%d\n", ans);
	}
	return 0;
}

