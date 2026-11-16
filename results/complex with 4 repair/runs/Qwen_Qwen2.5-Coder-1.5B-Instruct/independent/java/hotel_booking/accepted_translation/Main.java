public class Main {
    public static int solve(int n) {
        int nights = validNights(n);
        if (nights == 0) {
            return -1;
        }
        int rooms = n / 100;
        int charge = lodgingCharge(n);
        int cleaning = rooms * 45;
        int tax = (charge + cleaning) * 15 / 100;
        return charge + cleaning + tax;
    }

    private static int validNights(int n) {
        return n >= 0 && n <= 365 ? n : 0;
    }

    private static int lodgingCharge(int n) {
        // Assuming lodging_charge is a static method of some class named Service
        return Service.lodging_charge(n);
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(solve(200)); // Output should be the calculated value based on the logic in solve method
    }
}
