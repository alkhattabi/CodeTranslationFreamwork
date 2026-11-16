import { lodgingCharge } from "./service.mjs";
import { validNights } from "./utils.mjs";

export function solve(n: number): number {
    const nights = validNights(n);
    if (nights === 0) {
        return -1;
    }
    const rooms = Math.floor(n / 100);
    const charge = lodgingCharge(n);
    const cleaning = rooms * 45;
    const tax = Math.round((charge + cleaning) * 15 / 100);
    return charge + cleaning + tax;
}
