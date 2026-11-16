import java.util.function.IntUnaryOperator;

public class Main {
    public static int solve(int n) {
        IntUnaryOperator billableUnits = Utils::billableUnits;
        IntUnaryOperator energyCharge = Service::energy_charge;
        
        int units = billableUnits.applyAsInt(n);
        if (units == 0) {
            return 0;
        }
        int charge = energyCharge.applyAsInt(units);
        int serviceFee = 200;
        if (units <= 400) {
            serviceFee = 500;
        }
        int rebate = charge / 20;
        if (units < 100) {
            rebate = 0;
        }
        return charge + serviceFee - rebate;
    }
    
    public static void main(String[] args) {
        System.out.println(solve(100)); // Expected output: 600
        System.out.println(solve(-100)); // Expected output: 0
        System.out.println(solve(1200)); // Expected output: 1200
        System.out.println(solve(500)); // Expected output: 700
    }
}
