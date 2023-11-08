//Count Vowels: Write a program that counts the number of vowels (a, e, i, o, u) in a given string.

// Time Complexity - O(n)
/*#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100];
	int c=0;
	int l;
	printf("Enter a string:");
	scanf("%s", arr);
	l=strlen(arr);
	for (int i=0; i<l; i++)
	{
		char ch=arr[i];
		if (ch=='a'||ch=='e'||ch=='u'||ch=='o'||ch=='i'||ch=='A'||ch=='U'||ch=='I'||ch=='E'||ch=='O')
		{
			c++;
		}
	}
	printf("Number of vowels is %d\n", c);
	return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int count = 0;
    int length;

    printf("Enter a string: ");
    scanf("%s", input);

    length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        char ch = tolower(input[i]); // Convert the character to lowercase for case-insensitive comparison

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[100];
    int count = 0;
    int length;

    printf("Enter a string: ");
    scanf("%s", input);

    length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        char ch = toupper(input[i]); // Convert the character to lowercase for case-insensitive comparison

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}

