#include <stdio.h>
int main()
 {
   int a, b, reminder;
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);
   reminder = a % b;
   printf("The reminder of %d and %d is %d.", a, b, reminder);
   return 0;
}
