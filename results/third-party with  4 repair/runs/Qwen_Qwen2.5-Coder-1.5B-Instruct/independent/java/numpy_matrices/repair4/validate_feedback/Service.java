package com.example;

public class Service {
    public static int matrix_energy(int n) {
        // Ensure n is within the valid range [-100, 100]
        int x = Math.max(-100, Math.min(100, n));
        
        // Create a 3x3 matrix with elements from -100 to 100 modulo 5, 7, and 3
        int[][] m = new int[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                m[i][j] = (x % 5) * 10 + (x % 7) * 10 + (x % 3);
            }
        }
        
        // Calculate the square of the matrix
        int[][] square = new int[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                square[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    square[i][j] += m[i][k] * m[k][j];
                }
            }
        }
        
        // Calculate the trace of the square matrix
        int diagonal = 0;
        for (int i = 0; i < 3; i++) {
            diagonal += square[i][i];
        }
        
        // Calculate the vector signature using the original n value
        int vectorSignature = Utils.vector_signature(n);
        
        // Return the sum of the diagonal and the vector signature
        return diagonal + vectorSignature;
    }
}
