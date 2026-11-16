public class Utils {
    public static int weekly_demand(int n) {
        if (n < 0) {
            return 0;
        }
        int base = n * 3;
        int extra = (n % 7) * 2;
        if (n >= 40) {
            base += n / 4;
        }
        return base + extra;
    }
}

public class Service {
    public static int order_quantity(int n) {
        int demand = Utils.weekly_demand(n);
        int safety = 15;
        if (demand < 100) {
            safety = 35;
        }
        int available = n;
        if (n <= 0) {
            available = 0;
        }
        int shortage = demand + safety - available;
        if (shortage <= 0) {
            return 0;
        }
        int packs = (shortage + 11) / 12;
        return packs * 12;
    }
}

public class Main {
    public static int solve(int n) {
        int quantity = Service.order_quantity(n);
        if (quantity == 0) {
            return 0;
        }
        int unit_cost = 25;
        if (quantity >= 120) {
            unit_cost = 30;
        }
        int shipping = 400;
        if (quantity > 100) {
            shipping = 200;
        }
        return quantity * unit_cost + shipping;
    }
}
