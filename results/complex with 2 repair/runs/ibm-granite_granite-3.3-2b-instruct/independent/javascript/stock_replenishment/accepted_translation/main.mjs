import { order_quantity } from "./service.mjs";
import { weekly_demand } from "./utils.mjs";

export function solve(n) {
    const quantity = order_quantity(n);
    if (quantity === 0) {
        return 0;
    }
    const demand = weekly_demand(n);
    const unitCost = 25; // if quantity >= 120 else 30
    const shipping = 400; // if demand > 100 else 200
    return quantity * unitCost + shipping;
}
