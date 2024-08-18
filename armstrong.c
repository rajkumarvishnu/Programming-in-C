#include <stdio.h>

int main()
{
    // Declare variables
    int num, r, temp, sum = 0;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num); // Read the number from user input
    printf("The number you entered is: %d\n", num);

    // Store the original number in a temporary variable
    temp = num;

    // Loop to calculate the sum of the cubes of its digits
    while (temp > 0)
    {
        r = temp % 10; // Get the last digit of the number
        printf("The last digit is: %d\n", r);
        sum = temp + (r * r * r); // Add the cube of the digit to the sum
        temp = temp / 10;         // Remove the last digit from the number
    }

    // Check if the original number is equal to the sum of the cubes of its digits
    if (temp == sum)
    {
        printf("The number is an armstrong number\n");
    }
    else
    {
        printf("The number is not an armstrong number\n");
    }

    return 0; // Return 0 to indicate successful execution
}