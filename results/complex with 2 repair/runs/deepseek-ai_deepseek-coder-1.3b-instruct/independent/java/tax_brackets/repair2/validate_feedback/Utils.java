public class Utils {
    public static int taxableIncome(int n) {
        if (n <= 500) {
            return 0;
        }
        int income = n - 500;
        if (income > 20000) {
            income = 20000;
        }
        return income;
    }

    public static int calculateTax(int n) {
        int income = taxableIncome(n);
        if (income <= 10000) {
            return 0;
        }
        int tax = income - 10000;
        return tax;
    }
}
