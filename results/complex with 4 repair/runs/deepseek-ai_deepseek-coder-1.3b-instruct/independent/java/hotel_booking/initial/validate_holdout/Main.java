public class Main {
    public static int solve(int n) {
        int nights = Utils.valid_nights(n);
        if (nights == 0) {
            return -1;
        }
        int rooms = n / 100;
        int charge = Service.lodging_charge(n);
        int cleaning = rooms * 45;
        int tax = (charge + cleaning) * 15 / 100;
        return charge + cleaning + tax;
    }
}
