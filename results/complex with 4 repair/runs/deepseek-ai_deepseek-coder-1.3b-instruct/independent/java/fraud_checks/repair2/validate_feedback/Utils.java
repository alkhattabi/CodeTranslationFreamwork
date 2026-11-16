public class Utils {
    public static boolean luhnValid(int n) {
        if (n <= 0) {
            return false;
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
        return (total % 10 == 0) ? true : false;
    }
}
