import time  # Import the time module

count = 0  # Initialize the loop control variable

# Record the start time
start_time = time.time()


# Simulate a do-while loop using a while loop
while True:
    print(f"Count is: {count}")  # Print the current value of count
    count += 1  # Increment the count
    if count > 2500000:  # Continue the loop while count is greater than -1
        break  # Exit the loop

# Record the end time
end_time = time.time()

# Calculate the elapsed time
elapsed_time = end_time - start_time

# Print the elapsed time
print(f"Elapsed time: {elapsed_time} seconds")
