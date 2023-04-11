import java.util.Random;

public class MatrixMultiplicationExample {
    public static void main(String[] args) {
        int n = 10; // size of the matrices
        int numMatrices = 10000; // number of matrices to multiply
        double[][][] matrices = new double[numMatrices][n][n]; // an array to hold the matrices
        
        // fill the matrices with random values
        Random rand = new Random();
        for (int i = 0; i < numMatrices; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    matrices[i][j][k] = rand.nextDouble();
                }
            }
        }
        
        // multiply the matrices
        double[][] result = matrices[0];
        long startTime = System.currentTimeMillis(); // start timing the execution
        for (int i = 1; i < numMatrices; i++) {
            result = multiply(result, matrices[i]);
        }
        long endTime = System.currentTimeMillis(); // end timing the execution and print the duration
        System.out.println("Execution time: " + (endTime - startTime) + " milliseconds");
    }
    
    // helper function to multiply two matrices
    public static double[][] multiply(double[][] a, double[][] b) {
        int n = a.length;
        int m = b[0].length;
        int p = b.length;
        double[][] result = new double[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < p; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        return result;
    }
}
