#include <stdio.h>

#define MAX_SIZE 100

int square[MAX_SIZE][MAX_SIZE];

int main()
{
    int size, row, col, i;

    printf("Enter the size of the magic square: ");
    scanf("%d", &size);

    if (size > MAX_SIZE) 
    	{
        	printf("Sorry, the maximum size is %d\n", MAX_SIZE);
        	return 0;
        }

    row = 0;
    col = size / 2;

    for (i = 1; i <= size*size; i++) 
    {
        square[row][col] = i;
        row--;
        col++;

        if (row < 0 && col >= size) 
        {
            row += 2;
            col--;
        }
        else if (row < 0) 
        {
            row = size - 1;
        }
        else if (col >= size) 
        {
            col = 0;
        }
        else if (square[row][col] != 0) 
        {
            row += 2;
            col--;
        }
    }
 
    printf("The magic square of size %d is:\n", size);

    for (row = 0; row < size; row++) 
    {
        for (col = 0; col < size; col++) 
        {
            printf("%3d ", square[row][col]);
        }
        printf("\n");
    }

    return 0;
}

