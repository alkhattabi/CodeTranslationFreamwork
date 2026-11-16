import { transport_cost } from "./service.mjs";
import { weight_blocks } from "./utils.mjs";

export function solve(n) {
    const blocks = weight_blocks(n);
    if (blocks === 0) {
        return 0;
    }
    const cost = transport_cost(n);
    const fuel = (cost * 8 + 99) / 100;
    const insurance = blocks >= 10? 300 : 100;
    return cost + fuel + insurance;
}
