public class Main {
    public static int solve(int n) {
        int value = Service.scoreDigits(n);
        if (value % 2 == 0) {
            return value + 1;
        }
        return value - 1;
    }
}
