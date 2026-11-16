import { orderQuantity } from "./service.mjs";
import { weeklyDemand } from "./utils.mjs";

export function solve(n: number): number {
    const quantity = orderQuantity(n);
    if (quantity === 0) {
        return 0;
    }
    const demand = weeklyDemand(n);
    const unitCost = quantity >= 120 ? 25 : 30;
    const shipping = demand > 100 ? 400 : 200;
    return quantity * unitCost + shipping;
}
