import java.util.HashMap;
import java.util.Map;

public class Utils {
    public static int category_balance(int n) {
        n = Math.max(Math.min(200, n), -200);
        Map<String, Integer> frame = new HashMap<>();
        frame.put("A", n);
        frame.put("B", 12);
        frame.put("C", n / 2);
        frame.put("D", -7);
        frame.put("E", n % 9);
        frame.put("F", 4);
        frame.put("G", -n / 3);
        int sumA = frame.get("A");
        int sumB = frame.get("B");
        int sumC = frame.get("C");
        int sumD = frame.get("D");
        int sumE = frame.get("E");
        int sumF = frame.get("F");
        int sumG = frame.get("G");
        return 2 * sumA + sumB - sumC - sumD + sumE - sumF + sumG;
    }
}
