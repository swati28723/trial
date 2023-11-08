// Time Complexity - O(1)
#include <stdio.h>
#include <string.h>
int main()
{
	char city[100];
	printf("Enter city name: ");
	scanf("%s", city);
	if (strcmp(city, "Delhi")==0)
	{
		printf("Red Fort is a monument in Delhi.\n");
	}
	else if (strcmp(city, "Agra")==0)
	{
		printf("Taj Mahal is a monument in Delhi.\n");
	}
	else if (strcmp(city, "Jaipur")==0)
	{
		printf("Jal Mahal is a monument in Delhi.\n");
	}
	else
	{
		printf("We have no such city.\n");
	}
return 0;
}
