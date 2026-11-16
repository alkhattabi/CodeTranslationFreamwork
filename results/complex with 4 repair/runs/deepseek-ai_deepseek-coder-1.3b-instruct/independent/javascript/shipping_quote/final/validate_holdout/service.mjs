import { weight_blocks } from "./utils.mjs";

export function transport_cost(n) {
    const blocks = weight_blocks(n);
    let price = 1200 + blocks * 180;
    if (blocks > 5) {
        price += (blocks - 5) * 70;
    }
    if (blocks > 12) {
        price += (blocks - 12) * 90;
    }
    return price;
}
