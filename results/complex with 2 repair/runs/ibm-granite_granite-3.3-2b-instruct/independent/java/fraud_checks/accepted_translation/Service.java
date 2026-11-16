public class Service {
    public static int riskPoints(int n) {
        if (n <= 0) {
            return 100;
        }
        int score = 0;
        if (luhnValid(n) == 0) {
            score += 40;
        }
        if (n % 11 == 0) {
            score += 20;
        }
        if (n % 100 < 10) {
            score += 15;
        }
        if (n < 1000) {
            score += 25;
        }
        return score;
    }

    // Placeholder for the luhnValid method
    private static int luhnValid(int n) {
        // Implementation of luhn_valid function goes here
        return 0;
    }
}
