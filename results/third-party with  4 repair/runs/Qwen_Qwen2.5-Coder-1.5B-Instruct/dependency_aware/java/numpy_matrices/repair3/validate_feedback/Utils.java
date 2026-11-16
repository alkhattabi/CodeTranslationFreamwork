package com.example;

public class Utils {
    public static int vector_signature(int n) {
        n = Math.max(-100, Math.min(100, n));
        int[] v = new int[]{n % 11, Math.abs(n) % 7, (n / 3) % 9};
        int[][] m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int[] out = new int[3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                out[i] += m[i][j] * v[j];
            }
        }
        return Math.abs(out[0]) + Math.abs(out[1]) + Math.abs(out[2]);
    }
}
