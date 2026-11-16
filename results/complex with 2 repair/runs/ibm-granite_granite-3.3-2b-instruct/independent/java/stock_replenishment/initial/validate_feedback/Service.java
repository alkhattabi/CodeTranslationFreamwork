public class Service {
    public static int order_quantity(int n) {
        int demand = weeklyDemand(n);
        int safety = demand < 100? 15 : 35;
        int available = n > 0? n : 0;
        int shortage = demand + safety - available;
        if (shortage <= 0) {
            return 0;
        }
        int packs = (shortage + 11) / 12;
        return packs * 12;
    }

    // Dummy method for weekly_demand, assuming it's in the same file
    private static int weeklyDemand(int n) {
        // Placeholder implementation
        return n;
    }
}
