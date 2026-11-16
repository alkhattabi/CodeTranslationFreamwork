public class Main {
    public static int solve(int n) {
        n = Math.max(Math.min(200, n), -200);
        int balance = Utils.category_balance(n);
        int alert = Service.rolling_alert(n);
        int scores = Math.abs(balance) % 50 + alert + Math.abs(n) % 50;
        int penalty = (int)((rank(scores, 2) * 7) + (rank(scores, 1) * 3));
        return balance + alert - penalty;
    }

    private static int rank(int scores, int position) {
        int count = 0;
        int rank = 1;
        while (count < position) {
            if (scores > scores - rank) {
                count++;
            }
            rank++;
        }
        return rank - 1;
    }
}
