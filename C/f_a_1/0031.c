// Time Complexity - O(1)
# include <stdio.h>
int main()
{
int V, S;
printf("Enter number of Vadapavs V:");
scanf("%d", &V);
printf("Enter number of Samosa S:");
scanf("%d", &S);
int FP=(V*12)+(S*15);
printf("The final price of Samosa & Vadapavs is %d.", FP);
return 0;
}
