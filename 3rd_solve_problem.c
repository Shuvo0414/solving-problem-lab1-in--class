#include <stdio.h>

// Function declaration
void swapFunction(int *a, int *b);

int main()
{
    // Variable declaration
    int a = 66;
    int b = 99;

    // Print values before swapping
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Call swap function using addresses
    swapFunction(&a, &b);

    // Print values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

// Function to swap two integers using pointers
void swapFunction(int *a, int *b)
{
    // Temporary variable to hold one value
    int temp = *a;

    // Swap values using pointers
    *a = *b;

    *b = temp;
}