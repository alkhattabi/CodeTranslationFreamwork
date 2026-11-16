public class Main {
    public static int solve(int n) {
        int cost = gross(n);
        return cost + (cost * 15) / 100;
    }

    // Assume Service class is in the same package
    static class Service {
        public static int gross(int n) {
            // Implementation of gross function
            return n;
        }
    }
}
