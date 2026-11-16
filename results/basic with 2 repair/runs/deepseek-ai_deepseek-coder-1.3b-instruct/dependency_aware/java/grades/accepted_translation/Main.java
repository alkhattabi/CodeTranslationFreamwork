public class Utils {
    public static int clamp(int n) {
        if (n < 0) {
            return 0;
        }
        if (n > 100) {
            return 100;
        }
        return n;
    }
}

public class Service {
    public static int bonus_score(int n) {
        int base = Utils.clamp(n);
        return Utils.clamp(base + 7);
    }
}

public class Main {
    public static int solve(int n) {
        int result = Service.bonus_score(n);
        return result >= 60 ? 1 : 0;
    }
}
