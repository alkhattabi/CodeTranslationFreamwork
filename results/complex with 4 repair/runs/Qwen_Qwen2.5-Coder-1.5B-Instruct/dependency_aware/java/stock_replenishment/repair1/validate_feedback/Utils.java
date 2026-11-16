public class Utils {
    public static int weekly_demand(int n) {
        if (n < 0) {
            return 0;
        }
        int base = n * 3;
        int extra = (n % 7) * 2;
        if (n >= 40) {
            base += n / 4;
        }
        return base + extra;
    }
}
