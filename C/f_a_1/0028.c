// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int h, m, e, s, c;
printf("Enter marks of Hindi: ");
scanf("%d", &h);
printf("Enter marks of Maths: ");
scanf("%d", &m);
printf("Enter marks of English: ");
scanf("%d", &e);
printf("Enter marks of Science: ");
scanf("%d", &s);
printf("Enter marks of Computer:");
scanf("%d", &c);
int TM=h+m+e+s+c;
printf("%d marks obtained by a student in examination.\n", TM );
return 0;
}
