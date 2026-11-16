import java.util.Arrays;
import java.util.stream.IntStream;

public class Service {
    public static int rolling_alert(int n) {
        n = Math.max(Math.min(200, n), -200);
        int[] series = {n % 13, (n / 2) % 13, n % 17, Math.abs(n) % 11, n % 7};
        int[] rolling = IntStream.range(0, series.length)
                .map(i -> Arrays.stream(series, Math.max(0, i - 2), Math.min(i + 1, series.length))
                .sum())
                .toArray();
        int alerts = (int) Arrays.stream(rolling).filter(sum -> sum >= 15).count();
        return alerts * 10 + Math.abs(category_balance(n)) % 23;
    }

    public static int category_balance(int n) {
        // This is a placeholder for the category_balance function from the utils module.
        // You need to implement this function in your own code.
        return 0;
    }
}
