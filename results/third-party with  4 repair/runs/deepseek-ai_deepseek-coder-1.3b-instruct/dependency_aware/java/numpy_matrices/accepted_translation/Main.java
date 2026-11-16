public class Main {
    public static int solve(int n) {
        int energy = matrixEnergy(n);
        int[] vector = {energy, vectorSignature(n), n};
        for (int i = 0; i < vector.length; i++) {
            vector[i] = Math.max(Math.min(vector[i], 250), -150);
            if (vector[i] > 0) {
                vector[i] = -vector[i];
            }
        }
        int sum = 0;
        for (int i : vector) {
            sum += i;
        }
        return sum + (energy % 17);
    }

    public static int matrixEnergy(int n) {
        // Implementation of matrixEnergy method
        return 0;
    }

    public static int vectorSignature(int n) {
        n = Math.max(Math.min(100, n), -100);
        int[] v = {n % 11, Math.abs(n) % 7, (n / 3) % 9};
        int[][] m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int out = 0;
        for (int i = 0; i < 3; i++) {
            out += m[i / 3][i % 3] * v[i];
        }
        return Math.abs(out);
    }
}
