public class Service {
    public static int lodging_charge(int n) {
        int nights = validNights(n);
        if (nights == 0) {
            return 0;
        }
        int rooms = n / 100;
        int charge = rooms * nights * 150;
        if (nights >= 7) {
            charge -= charge / 10;
        }
        if (rooms >= 5) {
            charge -= charge / 20;
        }
        return charge;
    }

    // Placeholder for Utils class
    private static class Utils {
        public static int validNights(int n) {
            if (n <= 0) {
                return 0;
            }
            int rooms = n / 100;
            int nights = n % 100;
            if (rooms < 1 || rooms > 20 || nights < 1 || nights > 30) {
                return 0;
            }
            return nights;
        }
    }
}
