public class Main {
    public static int solve(int n) {
        int value = scoreDigits(n);
        if (value % 2 == 0) {
            return value + 1;
        } else {
            return value - 1;
        }
    }

    // Assuming Service.java has scoreDigits method
    public static int scoreDigits(int n) {
        // Implementation of scoreDigits method
        return 0;
    }
}
