import { weekly_demand } from "./utils.mjs";

export function order_quantity(n) {
    const demand = weekly_demand(n);
    const safety = demand < 100 ? 15 : 35;
    const available = n > 0 ? n : 0;
    const shortage = demand + safety - available;
    if (shortage <= 0) {
        return 0;
    }
    const packs = Math.floor(shortage / 12);
    return packs * 12;
}
