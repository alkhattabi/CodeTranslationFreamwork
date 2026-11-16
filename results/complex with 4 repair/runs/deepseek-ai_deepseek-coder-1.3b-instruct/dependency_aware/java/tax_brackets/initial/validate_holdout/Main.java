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

public class Service {
    public static int calculate_tax(int n) {
        int income = Utils.taxable_income(n);
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

public class Main {
    public static int solve(int n) {
        int credit = 100;
        if (n <= 0) {
            return 0;
        }
        int base = Utils.taxable_income(n);
        int tax = Service.calculate_tax(n);
        int payable = tax - credit;
        if (payable < 0) {
            payable = 0;
        }
        if (base > 10000) {
            payable = payable + (payable * 2 / 100);
        }
        return payable;
    }
}
