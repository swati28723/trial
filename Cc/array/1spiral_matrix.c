#include <stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
int a[1000][100];
int i=0, D=1, c=1, z=0, g=0;
while (c<=(n*n))
{
	if (D==1)
	{
		
		for (int k=i; k<n-i; k++)

		{
			a[i][k]=c;
			c++;

		}

		
			i++;
			D=2;
		
	}
	else if (D==2)
	{
		int b=n-i;
		for (int j=i; j<=b; j++)

		{
			a[j][b]=c;
			c++;

		}

		
			D=3;
		
	}
	else if (D==3)
	{
		int p=n-i;
		for (int q=((n-i)-1); q>=z; q--)

		{
			a[p][q]=c;
			c++;

		}

		
			z++;
			D=4;
		
	}
	else
	{
		int x=g;
		for (int y=(n-(i+1)); y>g; y--)

		{
			a[y][x]=c;
			c++;

		}
		
		
			g++;
			D=1;
		
	}
}
printf("spiral_matrix:\n");
for (int s=0; s<(n); s++)
{	

	for (int m=0; m<(n); m++)
	{
		printf("%3d ", a[s][m]);
	}
		printf("\n");
}
	printf("\n");
return 0;
}	
