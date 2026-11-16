public class Service {
    public static int transport_cost(int n) {
        int blocks = Utils.weight_blocks(n);
        int price = 1200 + blocks * 180;
        if (blocks > 5) {
            price += (blocks - 5) * 70;
        }
        if (blocks > 12) {
            price += (blocks - 12) * 90;
        }
        return price;
    }
}
