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
        return Utils.billable_units(n);
    }

    public static int energyCharge(int n) {
        int units = Service.billableUnits(n);
        int charge = 0;
        if (units > 400) {
            charge += (units - 400) * 50;
            units = 400;
        }
        if (units > 200) {
            charge += (units - 200) * 30;
            units = 200;
        }
        if (units > 100) {
            charge += (units - 100) * 20;
            units = 100;
        }
        charge += units * 10;
        return charge;
    }
}
