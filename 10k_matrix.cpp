#include <iostream>
#include <ctime>

using namespace std;

const int N = 10; // size of the matrix
const int M = 10000; // number of matrices
double *matrices = new double[N * N * M];

void matrix_multiply(double *a, double *b, double *c) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double sum = 0.0;
            for (int k = 0; k < N; k++) {
                sum += a[i * N + k] * b[k * N + j];
            }
            c[i * N + j] = sum;
        }
    }
}

int main() {
    //double *matrices = new double[N * N * M];
    double *result = new double[N * N];
    clock_t start, end;
    double cpu_time_used;

    // initialize matrices
    for (int i = 0; i < N * N * M; i++) {
        matrices[i] = (double) rand() / RAND_MAX;
    }

    // multiply matrices
    start = clock();
    for (int i = 0; i < M; i++) {
        double *a = &matrices[i * N * N];
        double *b = &matrices[(i + 1) * N * N];
        if (i == 0) {
            matrix_multiply(a, b, result);
        } else {
            matrix_multiply(result, b, result);
        }
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    cout << "Time taken: " << cpu_time_used << " seconds" << endl;

    delete[] matrices;
    delete[] result;
    return 0;
}
