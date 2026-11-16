import { weight_blocks } from "./utils.mjs";
import { transport_cost } from "./service.mjs";

export function solve(n) {
    const blocks = weight_blocks(n);
    if (blocks === 0) {
        return 0;
    }
    const cost = transport_cost(n);
    const fuel = Math.floor((cost * 8 + 99) / 100);
    let insurance = 300;
    if (blocks >= 10) {
        insurance = 100;
    }
    return cost + fuel + insurance;
}
