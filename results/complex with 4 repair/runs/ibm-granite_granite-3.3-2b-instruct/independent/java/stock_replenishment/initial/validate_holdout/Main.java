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
        // Implementation of orderQuantity method
    }

    public static int weeklyDemand(int n) {
        // Implementation of weeklyDemand method
    }
}

Note: The actual implementations of orderQuantity and weeklyDemand methods are not provided as they were not specified in the Python code. You need to translate these methods as well, maintaining the same logic and behavior.
