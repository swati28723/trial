//Anagram Check: Write a program that checks if two given strings are anagrams. Anagrams are words or phrases formed by rearranging the letters of another word or phrase.

// Time Complexity - O(n^2)
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], b[100];
	scanf("%s%s", a, b);
	int l1=strlen(a);
	int l2=strlen(b);
	int count=0;
	if (l1!=l2)
	{
		printf("Invalid\n");
	}
	else
	{
		for (int i=0; i<l1; i++)
		{
			int c=0;
			for (int j=0; j<l1; j++)
			{
				if (a[i]==b[j])
				{
					c++;
				}
			}
			if (c>0)
			{
				count++;
			}
		}
		if (count==l1)
		{
			printf("Anagram string\n");
		}
		else
		{
			printf("Not Anagram string\n");
		}
	}		
	return 0;
}


