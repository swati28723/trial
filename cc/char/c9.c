#include <stdio.h>
#include <string.h>
int main() 
{
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
	int c =1;
	for (int i=0; i<strlen(sentence); i++)
	{
		if (sentence[i] == ' ')
		{
			c++;
		}
	}
    printf("%d\n", c);

    return 0;
}
