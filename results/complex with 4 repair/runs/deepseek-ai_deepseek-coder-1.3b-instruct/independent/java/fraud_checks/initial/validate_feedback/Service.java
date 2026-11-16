public class Service {
    public static int riskPoints(int n) {
        int score = 0;
        if (n <= 0) {
            return 100;
        }
        if (Utils.luhnValid(n)) {
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
}
