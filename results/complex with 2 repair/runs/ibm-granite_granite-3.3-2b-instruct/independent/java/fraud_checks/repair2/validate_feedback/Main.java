public class Main {
    public static int solve(int n) {
        int points = riskPoints(n);
        if (points >= 70) {
            return 3;
        } else if (points >= 40) {
            return 2;
        } else if (luhnValid(n) == 1) {
            return 0;
        }
        return 1;
    }

    // Static method from Utils class
    private static int riskPoints(int n) {
        // Implementation of risk_points function
    }

    // Static method from Service class
    private static int luhnValid(int n) {
        // Implementation of luhn_valid function
    }
}
