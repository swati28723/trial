/*#include <stdio.h>
int main()
{
  int n, m, c;
  scanf("%d%d", &n, &m);
  int a[n], b[m];
  
  for (int i=0; i<n; i++)
  {
    a[i]=i+1;
  }
  
  for (int i=0; i<m; i++)
  {
    scanf("%d", &b[i]);
  }
  
  for (int i=0; i<n; i++)
  {
    if (a[i]==b[i])
    {
      printf("0");
      c++;
    }
    else
    {
      printf("%d", c);
      c = 1;
    }
  }
  return 0;
}


#include <stdio.h>
int main()
{
  int n, c = 0;
  scanf("%d", &n);
  int a[n];
  
  for (int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  
  int temp = a[0];
  for (int i=0; i<n; i++)
  {
    if (temp==a[i])
    {
      c++;
    }
  }
  
  if (c==n)
  {
    printf("YES");
  }
  else
  {
  printf("NO");
 }
}


#include <stdio.h>
int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int a[n];
    
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i=0; i<m%k; i++)
    {
        int l = a[0];
        for (int j=0; j<k-1; j++)
        {
            a[j] = a[j+1];
        }
        a[k-1] = l;
    }
    
    for (int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}


#include <stdio.h>

int main() 
{
    int N, W, X;
    scanf("%d", &N);

    int max_participants = 0;
    for (int i = 0; i < N; i++) 
    {
        scanf("%d %d", &W, &X);
        if (X >= 9 && X + 1 <= 18) 
        {
            max_participants += W;
        }
    }

    printf("%d\n", max_participants);

    return 0;
}
*/

#include <stdio.h>
int main()
{
  int n = 9, sum, c = 0;
  int a[n][n];
  
  for (int i=0; i<n; i++)
  {
    for (int j=0; j<n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  
  for (int i=0; i<n; i++)
  {
    sum = 0;
    for (int j=0; j<3; j++)
    {
      sum+=a[i][j];
    }
    if (sum == 45)
    {
        c++;
    }
  }
  
  if (c==9)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}


