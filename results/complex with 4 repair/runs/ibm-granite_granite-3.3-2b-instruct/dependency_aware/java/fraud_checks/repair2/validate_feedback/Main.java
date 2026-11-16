public class Main {
    public static int solve(int n) {
        int points = Utils.luhn_valid(n);
        if (points >= 70) {
            return 3;
        } else if (points >= 40) {
            return 2;
        } else if (Service.riskPoints(n) == 1) {
            return 0;
        } else {
            return 1;
        }
    }
}
