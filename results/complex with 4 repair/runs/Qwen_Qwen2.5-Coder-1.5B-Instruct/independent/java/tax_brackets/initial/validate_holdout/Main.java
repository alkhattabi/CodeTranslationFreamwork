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
        return payable + (payable * 2 / 100 if base > 10000 else 0);
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(solve(3000)); // Output will depend on the actual implementations of taxable_income and calculate_tax
    }
}
