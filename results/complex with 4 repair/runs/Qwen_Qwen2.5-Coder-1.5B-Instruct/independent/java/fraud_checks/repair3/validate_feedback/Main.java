public class Main {
    public static int solve(int n) {
        int points = riskPoints(n);
        if (points >= 70) {
            return 3;
        }
        if (points >= 40) {
            return 2;
        }
        if (Utils.luhnValid(n) == 1) {
            return 0;
        }
        return 1;
    }

    // Assuming these methods are defined in other classes
    private static int riskPoints(int n) {
        // Implementation of riskPoints logic
        return 0; // Placeholder return value
    }

    private static int luhnValid(int n) {
        // Implementation of luhnValid logic
        return 0; // Placeholder return value
    }
}
