public class Main {
    public static int solve(int n) {
        int value = n * 4 - discount(n);
        return Math.max(0, value);
    }

    public static int discount(int n) {
        // Implementation of the discount function
        // This is just a placeholder, replace it with your actual implementation
        return n / 2;
    }
}
