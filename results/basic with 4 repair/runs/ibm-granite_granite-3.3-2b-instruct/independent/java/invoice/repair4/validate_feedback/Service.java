public class Service {
    public static int gross(int n) {
        if (n < 0) {
            return 0;
        }
        return n * unitPrice(n);
    }

    // Assuming Utils class has unitPrice method
    private static int unitPrice(int n) {
        // Placeholder implementation
        return n;
    }
}
