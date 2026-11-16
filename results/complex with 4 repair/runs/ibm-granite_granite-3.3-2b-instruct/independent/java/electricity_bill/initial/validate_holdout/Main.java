public class Main {
    public static int solve(int n) {
        int units = billableUnits(n);
        if (units == 0) {
            return 0;
        }
        int charge = energyCharge(n);
        int serviceFee = units <= 400? 200 : 500;
        int rebate = charge / 20;
        if (units < 100) {
            rebate = 0;
        }
        return charge + serviceFee - rebate;
    }

    // Static methods of their respective classes
    public static int billableUnits(int n) {
        // Implementation here
    }

    public static int energyCharge(int n) {
        // Implementation here
    }
}

Note: The actual implementations of billableUnits and energyCharge methods are not provided in the Python code snippet, so they are represented as placeholders in the Java code.
