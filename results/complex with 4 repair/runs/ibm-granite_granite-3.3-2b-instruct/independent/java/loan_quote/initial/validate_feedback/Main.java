public class Main {
    public static int solve(int n) {
        int band = credit_band(n);
        if (band == 0) {
            return -1;
        }
        int principal = 10000 + (n - 300) * 10;
        int interest = yearlyInterest(n);
        int fee = band >= 3? 150 : 350;
        int total = principal + interest + fee;
        return (total + 11) / 12;
    }

    // Example of Service class
    public static class Service {
        public static int yearlyInterest(int n) {
            // Implementation of yearly_interest function
            return 0; // Placeholder
        }
    }

    // Example of Utils class
    public static class Utils {
        public static int credit_band(int n) {
            // Implementation of credit_band function
            return 0; // Placeholder
        }
    }
}

Note: The actual implementations of yearlyInterest and credit_band methods are not provided as they were not specified in the Python code. You need to replace the placeholder return values with the actual logic.
