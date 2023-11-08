#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int **myArray;
    int rows = 3, cols = 4;
    
    // Allocate memory for the rows
    myArray = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) 
    {
        // Allocate memory for the columns
        myArray[i] = (int *)malloc(cols * sizeof(int));
    }
    
    // Initialize the array elements
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            myArray[i][j] = i * cols + j;
        }
    }
    
    // Print the array
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%3d ", myArray[i][j]);
        }
        printf("\n");
    }
    
    // Free the allocated memory
    for (int i = 0; i < rows; i++) 
    {
        free(myArray[i]);
    }
    free(myArray);
    
    return 0;
}

