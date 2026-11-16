public class Service {
    public static int number_strength(int n) {
        int value = Math.abs(n) % 1500 + 2;
        int phi = (int) (Math.pow(value, 0.5) + 0.5);
        int divisor_count = 0;
        for (int i = 1; i <= phi; i++) {
            if (value % i == 0) {
                divisor_count++;
            }
        }
        return phi + 5 * divisor_count + factor_signature(n);
    }

    public static int factor_signature(int n) {
        int value = Math.abs(n) % 1500 + 2;
        int score = 0;
        for (int i = 5; i <= value; i++) {
            int count = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                }
            }
            score += i * count;
        }
        return score;
    }
}
