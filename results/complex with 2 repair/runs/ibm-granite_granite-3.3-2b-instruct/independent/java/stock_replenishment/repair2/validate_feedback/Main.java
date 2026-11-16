public class Main {
    public static int solve(int n) {
        int quantity = orderQuantity(n);
        if (quantity == 0) {
            return 0;
        }
        int demand = weeklyDemand(n);
        int unitCost = 25 >= quantity? 25 : 30;
        int shipping = demand > 100? 200 : 400;
        return quantity * unitCost + shipping;
    }

    // Static methods of their respective classes
    public static int orderQuantity(int n) {
        return Service.order_quantity(n);
    }

    public static int weeklyDemand(int n) {
        return Utils.weekly_demand(n);
    }
}
