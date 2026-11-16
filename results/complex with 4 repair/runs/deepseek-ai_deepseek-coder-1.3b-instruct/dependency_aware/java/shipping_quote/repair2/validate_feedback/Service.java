public class Service {
    public static int transportCost(int n) {
        int blocks = Utils.weightBlocks(n);
        if (blocks == 0) {
            return 0;
        }
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
