```java
import java.util.function.Function;

public class Main {
    public static int solve(int n) {
        Function<Integer, Integer> taxableIncomeFunction = Utils::taxableIncome;
        Function<Integer, Integer> calculateTaxFunction = Service::calculateTax;

        int base = taxableIncomeFunction.apply(n);
        int tax = calculateTaxFunction.apply(n);
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
        System.out.println(solve(1000)); // Expected output: 400
        System.out.println(solve(2500)); // Expected output: 100
        System.out.println(solve(3000)); // Expected output: 600
        System.out.println(solve(4000)); // Expected output: 800
        System.out.println(solve(5000)); // Expected output: 1000
        System.out.println(solve(6000)); // Expected output: 1200
        System.out.println(solve(7000)); // Expected output: 1400
        System.out.println(solve(8000)); // Expected output: 1600
        System.out.println(solve(9000)); // Expected output: 1800
        System.out.println(solve(10000)); // Expected output: 2000
        System.out.println(solve(11000)); // Expected output: 2200
        System.out.println(solve(12000)); // Expected output: 2400
        System.out.println(solve(13000)); // Expected output: 2600
        System.out.println(solve(14000)); // Expected output: 2800
        System.out.println(solve(15000)); // Expected output: 3000
        System.out.println(solve(16000)); // Expected output: 3200
        System.out.println(solve(17000)); // Expected output: 3400
        System.out.println(solve(18000)); // Expected output: 3600
        System.out.println(solve(19000)); // Expected output: 3800
        System.out.println(solve(20000)); // Expected output: 4000
        System.out.println(solve(21000)); // Expected output: 4200
        System.out.println(solve(22000)); // Expected output: 4400
        System.out.println(solve(23000)); // Expected output: 4600
        System.out.println(solve(24000)); // Expected output: 4800
        System.out.println(solve(25000)); // Expected output: 5000
        System.out.println(solve(26000)); // Expected output: 5200
        System.out.println(solve(270
