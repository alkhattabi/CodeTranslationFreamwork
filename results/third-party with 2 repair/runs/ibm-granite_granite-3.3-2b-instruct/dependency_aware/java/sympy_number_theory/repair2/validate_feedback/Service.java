public class Service {
    public static int number_strength(int n) {
        int value = Math.abs(n) % 1500 + 2;
        int phi = phi(value);
        int divisor_count = divisorCount(value);
        return phi + 5 * divisor_count + factorSignature(n);
    }

    private static int phi(int value) {
        int totient = 0;
        for (int i = 2; i <= value; i++) {
            if (value % i == 0) {
                totient -= totient / i;
            }
        }
        return totient;
    }

    private static int divisorCount(int value) {
        int count = 0;
        for (int i = 2; i <= Math.sqrt(value); i++) {
            while (value % i == 0) {
                count++;
                value /= i;
            }
        }
        if (value > 1) {
            count++;
        }
        return count;
    }

    private static int factorSignature(int n) {
        int value = Math.abs(n) % 1500 + 2;
        int score = 0;
        Map<Integer, Integer> factors = new PrimeFactorization(value).getPrimeFactors();
        for (Map.Entry<Integer, Integer> entry : factors.entrySet()) {
            score += entry.getKey() * entry.getValue();
        }
        return score + 3 * factors.size();
    }
}
