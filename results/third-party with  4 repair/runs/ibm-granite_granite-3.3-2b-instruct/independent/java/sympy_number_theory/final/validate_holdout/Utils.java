public class Utils {
    public static int factor_signature(int n) {
        int value = Math.abs(n) % 1500 + 2;
        int score = 0;
        Map<Integer, Integer> factors = new PrimeFactorization(value).getPrimeFactors();
        for (Map.Entry<Integer, Integer> entry : factors.entrySet()) {
            score += entry.getKey() * entry.getValue();
        }
        return score + 3 * factors.size();
    }

    private static class PrimeFactorization {
        public Map<Integer, Integer> getPrimeFactors(int number) {
            Map<Integer, Integer> factors = new HashMap<>();
            for (int i = 2; i <= number; i++) {
                while (number % i == 0) {
                    int count = 0;
                    while (number % i == 0) {
                        number /= i;
                        count++;
                    }
                    factors.put(i, count);
                }
            }
            return factors;
        }
    }
}

Note: Java does not have a built-in factorization function like Python's sympy, so a custom implementation is provided. The PrimeFactorization class is a helper class to encapsulate the prime factorization logic.
