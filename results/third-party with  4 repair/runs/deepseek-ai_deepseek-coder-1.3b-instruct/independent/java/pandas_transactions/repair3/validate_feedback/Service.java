public class Service {
    public static int rolling_alert(int n) {
        n = Math.max(Math.min(200, n), -200);
        int[] series = {n % 13, (n / 2) % 13, n % 17, Math.abs(n) % 11, n % 7};
        int[] rolling = new int[series.length];
        for(int i = 0; i < series.length; i++) {
            int sum = 0;
            if(i >= 2) {
                sum += series[i - 2];
            }
            if(i >= 1) {
                sum += series[i - 1];
            }
            if(i < series.length) {
                sum += series[i];
            }
            rolling[i] = sum;
        }
        long alerts = Arrays.stream(rolling).filter(sum -> sum >= 15).count();
        return (int)(alerts * 10 + Math.abs(category_balance(n)) % 23);
    }

    public static int category_balance(int n) {
        // This is a placeholder for the category_balance function from the utils module.
        // You need to implement this function in your own code.
        return 0;
    }
}
