#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5;
    printf("Enter marks of student 1\n");
    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);
    int b1, b2, b3, b4, b5;
    printf("Enter marks of student 2\n");
    scanf("%d%d%d%d%d", &b1, &b2, &b3, &b4, &b5);
    if ((a1+a2+a3+a4+a5)>(b1+b2+b3+b4+b5))
    {
        printf("Student 1 is topper\n");
    }
    else
    {
        printf("Student 2 is topper\n");
    }
}
