import { orderQuantity } from "./service.mjs";
import { weeklyDemand } from "./utils.mjs";

export function solve(n: number): number {
    const quantity = orderQuantity(n);
    if (quantity === 0) {
        return 0;
    }
    const demand = weeklyDemand(n);
    const unitCost = 25 * (quantity >= 120) + 30 * (quantity < 120);
    const shipping = 400 * (demand > 100) + 200 * (demand <= 100);
    return quantity * unitCost + shipping;
}
