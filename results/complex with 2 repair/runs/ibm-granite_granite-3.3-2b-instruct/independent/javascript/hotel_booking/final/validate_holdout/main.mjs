// main.mjs
import { validNights } from "./utils.mjs";
import { lodgingCharge } from "./service.mjs";

export function solve(n) {
    const nights = validNights(n);
    if (nights === 0) {
        return -1;
    }
    const rooms = Math.floor(n / 100);
    const charge = lodgingCharge(n);
    const cleaning = rooms * 45;
    const tax = ((charge + cleaning) * 15) / 100;
    return charge + cleaning + tax;
}
