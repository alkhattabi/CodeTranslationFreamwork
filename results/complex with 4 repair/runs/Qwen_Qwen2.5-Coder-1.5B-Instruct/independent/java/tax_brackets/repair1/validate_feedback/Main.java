public class Main {
    public static int solve(int n) {
        int base = Utils.taxableIncome(n);
        int tax = Service.calculateTax(n);
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

DEPENDENCY Service.java:
public class Service {
    public static int calculateTax(int n) {
        int income = Utils.taxableIncome(n);
        int tax = 0;
        if (income > 7000) {
            tax += (income - 7000) * 20 / 100;
            income = 7000;
        }
        if (income > 3000) {
            tax += (income - 3000) * 12 / 100;
            income = 3000;
        }
        tax += income * 5 / 100;
        return tax;
    }
}


DEPENDENCY Utils.java:
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
