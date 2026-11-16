import { order_quantity } from "./service.mjs";
import { weekly_demand } from "./utils.mjs";

export function solve(n) {
    const quantity = order_quantity(n);
    if (quantity === 0) {
        return 0;
    }
    const demand = weekly_demand(n);
    let unit_cost;
    if (quantity >= 120) {
        unit_cost = 25;
    } else {
        unit_cost = 30;
    }
    let shipping;
    if (demand > 100) {
        shipping = 400;
    } else {
        shipping = 200;
    }
    return quantity * unit_cost + shipping;
}
