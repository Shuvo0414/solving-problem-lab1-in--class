#include <stdio.h>

// Function declaration
void printMatrix(int (*ptr)[3], int rows, int cols);

int main()
{
    // 3x3 two-dimensional array
    int matrix[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    // Call function and pass matrix
    printMatrix(matrix, 3, 3);

    /* output : 1 2 3
                4 5 6
                7 8 9
    */

    return 0;
}

// Function to print matrix using pointers
void printMatrix(int (*ptr)[3], int rows, int cols)
{
    // Traverse rows
    for (int i = 0; i < rows; i++)
    {
        // Traverse columns
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }

        // Move to next line after each row
        printf("\n");
    }
}