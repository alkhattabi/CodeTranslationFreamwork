public class Main {
    public static int solve(int n) {
        if (!Utils.validDate(n)) {
            return -1;
        }
        int month = (n / 100) % 100;
        int quarter = (month - 1) / 3 + 1;
        return quarter * 1000 + Service.dayOfYear(n);
    }
}
