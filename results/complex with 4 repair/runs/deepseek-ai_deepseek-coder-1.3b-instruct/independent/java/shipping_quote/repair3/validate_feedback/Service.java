public class Service {
    public static int transportCost(int n) {
        int blocks = Utils.weightBlocks(n);
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
