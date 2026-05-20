#include <stdio.h>

// Function declaration
int evenNumbers(int *ptr, int length);

int main()
{
    // Test array
    int ar[] = {2, 7, 14, 19, 22, 35, 40};

    // Calculate array length
    int length = sizeof(ar) / sizeof(ar[0]);

    // Call function and store result
    int result = evenNumbers(ar, length);

    printf("Total even numbers: %d\n", result);

    // output : Total even numbers: 4

    return 0;
}

// Function to count even numbers using pointers
int evenNumbers(int *ptr, int length)
{
    // Variable to store total even numbers
    int count = 0;

    // Traverse array using pointer
    for (int i = 0; i < length; i++)
    {
        // Check if current element is even
        if (*(ptr + i) % 2 == 0)
        {
            // Increase count
            count++;
        }
    }

    // Return total even numbers
    return count;
}