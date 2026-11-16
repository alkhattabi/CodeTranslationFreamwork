public class Main {
    public static int solve(int n) {
        int balance = categoryBalance(n);
        int alert = rollingAlert(n);
        double[] scores = new double[]{Math.abs(balance) % 50, alert, Math.abs(n) % 50};
        Arrays.sort(scores);
        int rank1 = (int)(scores.length - Arrays.binarySearch(scores, Math.abs(balance) % 50)) + 1;
        int rank2 = (int)(scores.length - Arrays.binarySearch(scores, alert)) + 1;
        int penalty = rank1 * 7 + rank2 * 3;
        return balance + alert - penalty;
    }
}
