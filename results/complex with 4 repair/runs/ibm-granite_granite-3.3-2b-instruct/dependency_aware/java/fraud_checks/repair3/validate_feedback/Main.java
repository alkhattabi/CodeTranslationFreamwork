public class Main {
    public static int solve(int n) {
        int points = Service.riskPoints(n);
        if (points >= 70) {
            return 3;
        } else if (points >= 40) {
            return 2;
        } else if (Utils.luhn_valid(n) == 1) {
            return 0;
        } else {
            return 1;
        }
    }
}

// Note: In Java, there's no direct equivalent to Python's `from... import...` syntax.
// The `Utils` class from Python is represented as a separate `Utils.java` file in Java.
// The `luhn_valid` method in `Utils.java` is a direct translation of the Python's `luhn_valid` function.
// The `riskPoints` method in `Service.java` mirrors the behavior of the Python's `risk_points` function.
// The `private static` keyword is used to declare methods that are accessible only within the `Service` class.
// The `this` keyword is implicitly used in Java for method calls on the current class instance.
// Java does not have a direct equivalent to Python's `return` statement for functions,
// but the `return` keyword is used in Java to exit a method and send a value back to the caller.
// The `Service.riskPoints(n)` and `Utils.luhn_valid(n)` method calls are direct translations of the Python code.
// The `Service` and `Utils` classes are assumed to be in the same package and folder as `Main.java`.
