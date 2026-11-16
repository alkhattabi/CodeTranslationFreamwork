public class Main {
    public static int solve(int n) {
        int value = scoreDigits(n);
        if (value % 2 == 0) {
            return value + 1;
        }
        return value - 1;
    }

    // Assuming Service.score_digits is a static method that takes an integer and returns an integer
    private static int scoreDigits(int n) {
        // Implementation of score_digits logic here
        // For example, summing digits
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
}
