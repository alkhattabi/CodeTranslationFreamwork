public class Utils {
    public static int vector_signature(int n) {
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
