public class Main {
    public static int solve(int n) {
        int band = Utils.credit_band(n);
        if (band == 0) {
            return -1;
        }
        int principal = 10000 + (n - 300) * 10;
        int interest = Service.yearlyInterest(n);
        int fee = band >= 3? 150 : 350;
        int total = principal + interest + fee;
        return (total + 11) / 12;
    }

    // Example of Service class
    public static class Service {
        public static int yearlyInterest(int n) {
            int band = credit_band(n);
            if (band == 0) {
                return -1;
            }
            int principal = 10000 + (n - 300) * 10;
            int rate = 18 - band * 3;
            int interest = principal * rate / 100;
            if (principal > 14000) {
                interest += 125;
            }
            return interest;
        }
    }

    // Example of Utils class
    public static class Utils {
        public static int credit_band(int n) {
            if (n < 300 || n > 850) {
                return 0;
            }
            if (n >= 750) {
                return 4;
            }
            if (n >= 650) {
                return 3;
            }
            if (n >= 550) {
                return 2;
            }
            if (n >= 450) {
                return 1;
            }
            return 0;
        }
    }
}

Note: The actual implementations of yearlyInterest and credit_band methods are not provided as they were not specified in the Python code. You need to replace the placeholder return values with the actual logic.
