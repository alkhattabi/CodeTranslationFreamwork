// service.mjs
import { validNights } from "./utils.mjs";

export function lodgingCharge(n) {
    const nights = validNights(n);
    if (nights === 0) {
        return 0;
    }
    const rooms = Math.floor(n / 100);
    let charge = rooms * nights * 150;
    if (nights >= 7) {
        charge -= Math.floor(charge / 10);
    }
    if (rooms >= 5) {
        charge -= Math.floor(charge / 20);
    }
    return charge;
}
