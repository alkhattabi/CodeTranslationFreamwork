// service.mjs
import { unit_price } from "./utils.mjs";

export function gross(n) {
    if (n < 0) {
        return 0;
    }
    return n * unit_price(n);
}


// utils.mjs
export function unit_price(n) {
    if (n >= 10) {
        return 10;
    }
    return 12;
}
