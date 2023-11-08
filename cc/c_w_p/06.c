// Time Complexity - O(n)
# include <stdio.h>
int main()
{
char c;
c=getchar();
while(c != '\n')
{
putchar(c);
printf("\n");
c=getchar();
}
return 0;
}

