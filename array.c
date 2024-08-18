#include <stdio.h>

int main()
{
    // Declare and initialize an integer array
    int arr[] = {1, 2, 3, 4, 5};

      int length = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array

    // Loop through the array and print each element
    for (int i = 0; i < length; i++)
    {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0; // Return 0 to indicate successful execution
}