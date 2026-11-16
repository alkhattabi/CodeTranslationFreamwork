public class Main {
    public static int solve(int n) {
        int nights = Utils.valid_nights(n);
        if (nights == 0) {
            return -1;
        }
        int rooms = n / 100;
        int charge = LodgingService.lodging_charge(n);
        int cleaning = rooms * 45;
        int tax = (charge + cleaning) * 15 / 100;
        return charge + cleaning + tax;
    }

    private static int validNights(int n) {
        return Utils.valid_nights(n);
    }

    private static int lodgingCharge(int n) {
        return LodgingService.lodging_charge(n);
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(solve(200)); // Output should be the calculated value based on the logic in solve method
    }
}

DEPENDENCY LodgingService.java:
public class LodgingService {
    public static int lodging_charge(int n) {
        int nights = Utils.valid_nights(n);
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
}


DEPENDENCY Utils.java:
public class Utils {
    public static int valid_nights(int n) {
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
