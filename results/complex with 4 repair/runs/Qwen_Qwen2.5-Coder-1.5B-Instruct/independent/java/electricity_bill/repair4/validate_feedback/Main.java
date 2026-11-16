public class Main {
    public static int solve(int n) {
        int units = billableUnits(n);
        if (units == 0) {
            return 0;
        }
        int charge = energyCharge(n);
        int serviceFee = 200 <= units ? 200 : 500;
        int rebate = units < 100 ? units / 20 : 0;
        return charge + serviceFee - rebate;
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(solve(100)); // Output will depend on the actual implementations of billableUnits and energyCharge
    }
}
