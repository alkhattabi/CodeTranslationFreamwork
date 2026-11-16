import java.util.function.IntUnaryOperator;

public class Main {
    public static int solve(int n) {
        int value = Service.score_digits(n);
        if (value % 2 == 0) {
            return value + 1;
        }
        return value - 1;
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(solve(123)); // Output: 456
        System.out.println(solve(-123)); // Output: -456
        System.out.println(solve(0)); // Output: 0
    }
}

class Utils {
    public static int digitSum(int n) {
        return String.valueOf(Math.abs(n)).chars().map(Character::getNumericValue).sum();
    }
}
