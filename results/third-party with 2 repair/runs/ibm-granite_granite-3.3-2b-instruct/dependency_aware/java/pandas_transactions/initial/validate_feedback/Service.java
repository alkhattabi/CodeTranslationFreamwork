public class Service {
    public static int rolling_alert(int n) {
        n = Math.max(-200, Math.min(200, n));
        int[] series = {n % 13, (n / 2) % 13, n % 17, Math.abs(n) % 11, n % 7};
        int[] rollingSum = new int[series.length];
        int count = 0;
        for (int i = 0; i < series.length; i++) {
            rollingSum[i] = 0;
            if (i > 0) rollingSum[i] += rollingSum[i - 1];
            rollingSum[i] += series[i];
        }

        int alerts = 0;
        for (int i = 2; i < rollingSum.length; i++) {
            if (rollingSum[i] >= 15) alerts++;
        }

        return (alerts * 10) + Math.abs(Utils.category_balance(n)) % 23;
    }
}
