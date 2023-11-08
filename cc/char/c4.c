//Palindrome Check: Write a program that checks if a given string is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward.

// Time Complexity - O(n)
#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%s", c);
    int  l;
    l=strlen(c);
    char a[l];
    int j=l-1, count=0;
    for (int i=0; i<l; i++)
    {
        a[i]=c[j];
        j--;
    }
    for (int i=0; i<l; i++)
    {
        if (a[i]==c[i])
        {
            count++;
        }
    }
    if (count==l)
    {
        printf("Palindrome string");
    }
    else 
    {
        printf("Not palindrome string");
    }
    return 0;
}

