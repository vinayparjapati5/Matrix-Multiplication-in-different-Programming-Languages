# Introduction
Matrix multiplication is a fundamental operation in linear algebra, and it is commonly used in various fields such as physics, engineering, and computer science. In this repository, I will provide a brief introduction to how matrix multiplication can be performed in different programming language(without using library). Finally, I will compare the performance of matrix multiplication in each programming language(without using library)and determine which one is faster.

<b>1. Python</b>: Python is a high-level programming language that is widely used for scientific computing and data analysis. Matrix multiplication in Python can be performed efficiently using the NumPy library, which is optimized for numerical operations. However, performing matrix multiplication without using NumPy can be slower compared to other programming languages.

<b>2. Java</b>: Java is a popular programming language used for various applications, including scientific computing. Java provides built-in classes and libraries for matrix operations, including matrix multiplication. However, matrix multiplication in Java can be slower compared to other programming languages due to its interpreted nature.

<b>3. C</b>: C is a low-level programming language that provides direct access to hardware resources, making it a popular choice for high-performance computing. Matrix multiplication in C can be implemented efficiently using low-level optimization techniques such as loop unrolling and cache optimization. However, implementing matrix multiplication in C can be more complex compared to other programming languages.

<b>4. C++</b>: C++ is a popular programming language for scientific computing and high-performance computing. C++ provides features such as operator overloading and templates, making it a powerful language for matrix operations. Matrix multiplication in C++ can be implemented efficiently using optimized libraries such as BLAS and LAPACK.

<b>5. MATLAB</b>: MATLAB is a high-level programming language specifically designed for scientific computing and numerical analysis. MATLAB provides built-in functions for matrix operations, including matrix multiplication, which are optimized for performance. However, using MATLAB for matrix operations can be slower compared to other programming languages due to its interpreted nature.

In general, C and C++ are considered the fastest programming languages for matrix multiplication due to their low-level optimization capabilities and direct access to hardware resources. Python and MATLAB are slower compared to C and C++, but they provide more flexibility and ease of use for scientific computing applications. Java falls somewhere in between due to its interpreted nature and built-in matrix operations.

# Methodology
The methodology of matrix multiplication involves a set of steps that need to be followed to correctly multiply two matrices. The steps are as follows:

1. Check if the matrices can be multiplied: In order to multiply two matrices, the number of columns of the first matrix must be equal to the number of rows of the second matrix. If this condition is not satisfied, the matrices cannot be multiplied.

2. Initialize the result matrix: The result of matrix multiplication is a matrix whose dimensions are the number of rows of the first matrix and the number of columns of the second matrix. Initialize this matrix with all zeros.

3. Perform the multiplication: For each element in the result matrix, multiply the corresponding row of the first matrix with the corresponding column of the second matrix, and sum the products.

4. Store the result: Store the calculated value in the result matrix at the appropriate position.

5. Repeat until all elements in the result matrix have been calculated

# Comparison of Performance of Matrix Multiplication

1.






