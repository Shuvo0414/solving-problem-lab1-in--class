#include <stdio.h>

// Function declaration
void reverseFunction(int *ar, int length);

int main()
{
    // Array declaration
    int ar[] = {10, 20, 30, 40, 50};

    // Calculate array length
    int length = sizeof(ar) / sizeof(ar[0]);

    // Call reverse function
    reverseFunction(ar, length);

    // for loop for the reverse array print.
    for (int i = 0; i < length; i++)
    {
        printf("%d ", ar[i]); 
        //output : 50 40 30 20 10
    }

    return 0;
}

// Function to reverse array using pointers
void reverseFunction(int *ar, int length)
{
    // Pointer to first element
    int *start = ar;

    // Pointer to last element
    int *end = ar + length - 1;

    // Reverse array using pointer swapping
    while (start < end)
    {
        int temp = *start;

        *start = *end;

        *end = temp;

        start++;
        end--;
    }
}