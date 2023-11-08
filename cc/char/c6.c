//Longest Word: Write a program that finds the longest word in a given sentence. Assume that the sentence only contains letters, spaces, and punctuation marks.

// Time Complexity - O(n)
/*#include <stdio.h>
int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("The entered sentence is: %s\n", sentence);

    return 0;
}
*/


#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	printf("Enter the number of strings: ");
    scanf("%d", &n);
	char a[100][100];
	for (int i=0; i<n; i++)
	{
		scanf("%s", a[i]);
	}
	int max=0;
	char c[50];
	for (int i=0; i<n; i++)
	{
		if (strlen(a[i])>max)
		{
			max=strlen(a[i]);
			strcpy(c, a[i]);
		}
	}
	printf("The longest word in the sentence is \"%s\" and its length is %d.\n", c, max);
	return 0;
}
