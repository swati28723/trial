#include <stdio.h>
int area(int l, int b)
{
  int area = l * b;
  return area;
}

int main()
{
  int a, b;
  scanf ("%d%d", &a, &b);
  int aa =area(a, b);
  printf("%d\n", aa);
  return 0;
}

