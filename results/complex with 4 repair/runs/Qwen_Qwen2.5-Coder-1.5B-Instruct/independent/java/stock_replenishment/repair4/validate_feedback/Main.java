public class Main {
    public static int solve(int n) {
        int quantity = orderQuantity(n);
        if (quantity == 0) {
            return 0;
        }
        int demand = weeklyDemand(n);
        int unitCost = (quantity >= 120) ? 25 : 30;
        int shipping = (demand > 100) ? 400 : 200;
        return quantity * unitCost + shipping;
    }

    // Assuming these methods are defined in other classes
    public static int orderQuantity(int n) {
        // Implementation of orderQuantity method
        return 0; // Placeholder return value
    }

    public static int weeklyDemand(int n) {
        // Implementation of weeklyDemand method
        return 0; // Placeholder return value
    }
}
