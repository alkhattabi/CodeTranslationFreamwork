public class Service {
    public static int gross(int n) {
        if (n < 0) {
            return 0;
        }
        return n * Utils.unit_price(n);
    }
}
