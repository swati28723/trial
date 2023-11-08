//Reverse a String: Write a program that takes a string as input and prints its reverse. For example, if the input is "Hello", the output should be "olleH".

// Time Complexity - O(n)
#include <stdio.h>
#include <string.h>

int main() 
{
    char input[100];
    char reversed[100] = "";
    int length, i;

    printf("Enter a string: ");
    scanf("%s", input);

    length = strlen(input);

    for (i = length - 1; i >= 0; i--) {
        strncat(reversed, &input[i], 1);
    }

    printf("Reversed string: %s\n", reversed);

    return 0;
}

