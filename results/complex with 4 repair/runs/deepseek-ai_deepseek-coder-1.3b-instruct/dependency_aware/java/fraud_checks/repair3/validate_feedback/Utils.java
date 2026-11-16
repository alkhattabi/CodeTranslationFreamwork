public class Utils {
    public static int luhn_valid(int n) {
        if (n <= 0) {
            return 0;
        }
        int total = 0;
        boolean doubleDigit = false;
        while (n > 0) {
            int digit = n % 10;
            if (doubleDigit) {
                digit *= 2;
                if (digit > 9) {
                    digit -= 9;
                }
            }
            total += digit;
            doubleDigit = !doubleDigit;
            n /= 10;
        }
        return (total % 10 == 0) ? 1 : 0;
    }
}
