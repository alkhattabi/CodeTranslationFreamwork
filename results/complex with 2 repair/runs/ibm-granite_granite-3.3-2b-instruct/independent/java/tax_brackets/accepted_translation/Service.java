public class Service {
    public static int calculate_tax(int n) {
        int income = taxable_income(n);
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

Note: The taxable_income method from the utils module is assumed to be implemented in Java and is not provided here.
