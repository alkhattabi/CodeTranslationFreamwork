// main.mjs
import { energyCharge } from "./service.mjs";
import { billableUnits } from "./utils.mjs";

export function solve(n) {
    const units = billableUnits(n);
    if (units === 0) {
        return 0;
    }
    const charge = energyCharge(units);
    const serviceFee = 200 * (units <= 400 ? 1 : 2);
    const rebate = Math.floor(charge / 20) * (units < 100 ? 1 : 0);
    return charge + serviceFee - rebate;
}
