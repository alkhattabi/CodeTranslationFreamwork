import utils.Utils;

public class Main {
    public static int solve(int n) {
        int balance = Utils.categoryBalance(n);
        int alert = service.rollingAlert(n);
        series scores = series.of(Math.abs(balance) % 50, alert, Math.abs(n) % 50);
        series ranks = scores.rank("dense", true);
        int penalty = (int)(ranks.iloc[0] * 7 + ranks.iloc[1] * 3);
        return balance + alert - penalty;
    }
}
