import random
import time

# Function to perform matrix multiplication
def matrix_multiply(mat1, mat2):
    rows1 = len(mat1)
    cols1 = len(mat1[0])
    rows2 = len(mat2)
    cols2 = len(mat2[0])

    # Check if the matrices can be multiplied
    if cols1 != rows2:
        print("Error: Number of columns in the first matrix must be equal to the number of rows in the second matrix")
        return None

    # Create a result matrix filled with zeros
    result = [[0 for _ in range(cols2)] for _ in range(rows1)]

    # Perform matrix multiplication using nested loops
    for i in range(rows1):
        for j in range(cols2):
            for k in range(rows2):
                result[i][j] += mat1[i][k] * mat2[k][j]

    return result

# Create 30,000 random 10x10 matrices
matrices = []
for _ in range(10000):
    matrix = [[random.randint(1, 10) for _ in range(10)] for _ in range(10)]
    matrices.append(matrix)

# Start the timer
start_time = time.time()

# Multiply the matrices sequentially
result = matrices[0]
for i in range(1, len(matrices)):
    result = matrix_multiply(result, matrices[i])

# Stop the timer
end_time = time.time()

# Calculate the execution time
execution_time = end_time - start_time

# Print the result and execution time
print("Result:")
print(result)
print("Execution time: {:.6f} seconds".format(execution_time))
