#include <stdio.h>

// Function declaration
int maxFunction();

int main()
{
    // Call the function and store the returned maximum value
    int result = maxFunction();

    printf("Maximum value is: %d\n", result);
    //output : Maximum value is: 89

    return 0;
}

// Function to find the maximum value in the array
int maxFunction()
{
    // Array declaration
    int a[] = {12, 45, 7, 89, 23, 56};

    // Calculate total number of elements in the array
    int length = sizeof(a) / sizeof(a[0]);

    // Store the first array element as the initial maximum value
    int maxValue = a[0];

    // Loop through the array starting from index 1
    for (int i = 1; i < length; i++)
    {
        // Check if current element is greater than maxValue
        if (maxValue < a[i])
        {
            // Update maxValue with the larger element
            maxValue = a[i];
        }
    }

    // Return the maximum value
    return maxValue;
}