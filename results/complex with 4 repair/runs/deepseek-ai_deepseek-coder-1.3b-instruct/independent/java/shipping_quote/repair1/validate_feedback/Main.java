public class Main {
    public static int solve(int n) {
        int blocks = Utils.weightBlocks(n);
        if (blocks == 0) {
            return 0;
        }
        int cost = transportCost(n);
        int fuel = (cost * 8 + 99) / 100;
        int insurance = (blocks >= 10) ? 300 : 100;
        return cost + fuel + insurance;
    }

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
