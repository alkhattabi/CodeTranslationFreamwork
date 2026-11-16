public class Main {
    public static int solve(int n) {
        int blocks = weightBlocks(n);
        if (blocks == 0) {
            return 0;
        }
        int cost = transportCost(n);
        int fuel = (cost * 8 + 99) / 100;
        int insurance = blocks >= 10? 300 : 100;
        return cost + fuel + insurance;
    }

    // Static methods of their respective classes
    public static int weightBlocks(int n) {
        return Utils.weight_blocks(n);
    }

    public static int transportCost(int n) {
        return Service.transport_cost(n);
    }
}
