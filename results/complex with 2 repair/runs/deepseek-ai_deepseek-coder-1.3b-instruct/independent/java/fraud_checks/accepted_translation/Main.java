public class Main {
    public static int solve(int n) {
        int points = riskPoints(n);
        if (points >= 70) {
            return 3;
        }
        if (points >= 40) {
            return 2;
        }
        if (luhnValid(n)) {
            return 0;
        }
        return 1;
    }

    public static int riskPoints(int n) {
        // Implementation of riskPoints method
        return 0;
    }

    public static boolean luhnValid(int n) {
        // Implementation of luhnValid method
        return false;
    }
}
