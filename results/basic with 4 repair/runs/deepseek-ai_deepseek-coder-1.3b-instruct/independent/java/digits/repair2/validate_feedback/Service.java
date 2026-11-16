public class Service {
    public static int scoreDigits(int n) {
        return digitSum(n) * 3;
    }

    private static int digitSum(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
}
