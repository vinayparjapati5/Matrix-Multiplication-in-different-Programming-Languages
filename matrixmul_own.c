#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10 // Size of matrices
double matrices[10000][N][N];

void matrix_multiplication(double a[][N], double b[][N], double c[][N]) {
    int i, j, k;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            c[i][j] = 0;
            for (k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    double result[N][N];
    int i, j, k;
    clock_t start, end;
    double cpu_time_used;

    // Initialize matrices with random values
    for (i = 0; i < 50000; i++) {
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                matrices[i][j][k] = (double)rand() / RAND_MAX;
            }
        }
    }

    // Multiply matrices and measure execution time
    start = clock();
    matrix_multiplication(matrices[0], matrices[1], result);
    for (i = 2; i < 50000; i++) {
        matrix_multiplication(result, matrices[i], result);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Print the execution time
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}
