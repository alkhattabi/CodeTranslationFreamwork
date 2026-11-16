public class Utils {
    public static int weightBlocks(int n) {
        if (n <= 0) {
            return 0;
        }
        if (n > 10000) {
            n = 10000;
        }
        return (n + 499) / 500;
    }

    public static int transportCost(int n) {
        // Implementation of the method transportCost(int n)
        // This is a placeholder, replace it with your actual implementation
        return n * 2;
    }
}
