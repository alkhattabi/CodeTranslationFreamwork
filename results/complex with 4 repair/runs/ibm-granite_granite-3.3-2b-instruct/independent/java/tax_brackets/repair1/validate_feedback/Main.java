public class Main {
    public static int solve(int n) {
        int base = taxableIncome(n);
        int tax = calculateTax(n);
        int credit = 100;
        if (base > 0 && base <= 2500) {
            credit = 0;
        }
        int payable = tax - credit;
        if (payable < 0) {
            payable = 0;
        }
        return payable + (payable * 2 / 100 > 0? (payable * 2) / 100 : 0);
    }

    // Static methods of their class
    public static int taxableIncome(int n) {
        // Implementation here
    }

    public static int calculateTax(int n) {
        // Implementation here
    }
}
