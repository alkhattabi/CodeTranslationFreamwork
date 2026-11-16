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

public class Service {
    public static int risk_points(int n) {
        if (n <= 0) {
            return 100;
        }
        int score = 0;
        if (Utils.luhn_valid(n) == 0) {
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

public class Main {
    public static int solve(int n) {
        int points = Service.risk_points(n);
        if (points >= 70) {
            return 3;
        }
        if (points >= 40) {
            return 2;
        }
        if (Utils.luhn_valid(n) == 1) {
            return 0;
        }
        return 1;
    }
}
