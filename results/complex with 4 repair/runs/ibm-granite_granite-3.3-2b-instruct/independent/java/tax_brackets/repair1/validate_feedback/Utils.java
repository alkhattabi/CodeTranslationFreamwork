public class Utils {
    public static int taxable_income(int n) {
        if (n <= 500) {
            return 0;
        }
        int income = n - 500;
        if (income > 20000) {
            income = 20000;
        }
        return income;
    }
}
