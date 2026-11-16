public class Main {
    public static int solve(int n) {
        int quantity = Service.orderQuantity(n);
        if (quantity == 0) {
            return 0;
        }
        int demand = Utils.weeklyDemand(n);
        int unitCost = (quantity >= 120) ? 30 : 25;
        int shipping = (demand > 100) ? 400 : 200;
        return quantity * unitCost + shipping;
    }
}
