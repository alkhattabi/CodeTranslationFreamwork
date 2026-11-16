// main.mjs

import { order_quantity } from "./service.mjs";
import { weekly_demand } from "./utils.mjs";

export function solve(n) {
    const quantity = order_quantity(n);
    if (quantity === 0) {
        return 0;
    }
    const demand = weekly_demand(n);
    const unitCost = 25 * (quantity >= 120) + 30 * (quantity < 120);
    const shipping = 400 * (demand > 100) + 200 * (demand <= 100);
    return quantity * unitCost + shipping;
}
