import { order_quantity } from "./service.mjs";
import { weekly_demand } from "./utils.mjs";

export function solve(n) {
    const quantity = order_quantity(n);
    if (quantity === 0) {
        return 0;
    }
    const demand = weekly_demand(n);
    const unit_cost = quantity >= 120 ? 30 : 25;
    const shipping = demand > 100 ? 400 : 200;
    return quantity * unit_cost + shipping;
}
