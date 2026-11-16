public class Service {
    public static int rolling_alert(int n) {
        n = Math.max(-200, Math.min(200, n));
        Series<Integer> series = new Series<>(Arrays.asList(n % 13, (n / 2) % 13, n % 17, Math.abs(n) % 11, n % 7));
        RollingWindow<Integer> rolling = series.rolling(windowSize = 3, minPeriods = 1);
        int alerts = rolling.sum().stream().filter(x -> x >= 15).count();
        return alerts * 10 + Math.abs(Utils.category_balance(n)) % 23;
    }
}
