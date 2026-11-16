import utils.Utils;
import service.Service;

public class Main {
    public static int solve(int n) {
        int units = Utils.billableUnits(n);
        if (units == 0) {
            return 0;
        }
        int charge = Service.energyCharge(n);
        int serviceFee = (units <= 400) ? 200 : 500;
        int rebate = (units < 100) ? (charge / 20) : 0;
        return charge + serviceFee - rebate;
    }
}
