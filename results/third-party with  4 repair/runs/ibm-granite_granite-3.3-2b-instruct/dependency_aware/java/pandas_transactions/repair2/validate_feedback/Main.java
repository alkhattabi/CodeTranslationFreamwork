public class Main {
    public static int solve(int n) {
        int balance = category_balance(n);
        int alert = rolling_alert(n);
        int[] scores = {Math.abs(balance) % 50, alert, Math.abs(n) % 50};
        int[] ranks = new int[scores.length];

        for (int i = 0; i < scores.length; i++) {
            ranks[i] = i;
        }

        for (int i = 0; i < scores.length; i++) {
            for (int j = 0; j < scores.length; j++) {
                if (scores[i] < scores[j]) {
                    int temp = ranks[i];
                    ranks[i] = ranks[j];
                    ranks[j] = temp;
                }
            }
        }

        int penalty = (int) (ranks[0] * 7 + ranks[1] * 3);
        return balance + alert - penalty;
    }
}

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

public class Utils {
    public static int category_balance(int n) {
        n = Math.max(-200, Math.min(200, n));
        List<Integer> amounts = new ArrayList<>();
        amounts.add(n);
        amounts.add(12);
        amounts.add(n / 2);
        amounts.add(-7);
        amounts.add(n % 9);
        amounts.add(4);
        amounts.add(-n / 3);

        Map<String, Integer> sums = new HashMap<>();
        for (int amount : amounts) {
            if (sums.containsKey(frame.category.get(amount))) {
                sums.put(frame.category.get(amount), sums.get(frame.category.get(amount)) + amount);
            } else {
                sums.put(frame.category.get(amount), amount);
            }
        }

        int result = 2 * sums.get("A") + sums.get("B") - sums.get("C");
        return result;
    }
}
