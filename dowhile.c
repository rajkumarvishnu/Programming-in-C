#include <stdio.h>
#include <time.h> // Include the time.h header for clock()

int main()
{
    int count = 0; // Initialize the loop control variable

    // Record the start time
    clock_t start_time = clock();

    // Do-while loop
    do
    {
        printf("Count is: %d\n", count); // Print the current value of count
        count = count + 1;               // Increment the count
    } while (count <= 2500000); // Continue the loop while count is greater than -1

    // Record the end time
    clock_t end_time = clock();

    // Calculate the elapsed time in seconds
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Print the elapsed time
    printf("Elapsed time: %f seconds\n", elapsed_time);

    return 0; // Return 0 to indicate successful execution
}