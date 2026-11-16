// main.mjs
export function solve(n) {
    const quantity = order_quantity(n);
    if (quantity === 0) {
        return 0;
    }
    const demand = weekly_demand(n);
    const unitCost = quantity >= 120? 30 : 25;
    const shipping = demand > 100? 400 : 200;
    return quantity * unitCost + shipping;
}

// service.mjs (no changes needed)
export function order_quantity(n) {
    const demand = weekly_demand(n);
    const safety = 15;
    const available = n > 0? n : 0;
    const shortage = demand + safety - available;
    if (shortage <= 0) {
        return 0;
    }
    const packs = (shortage + 11) / 12;
    return Math.floor(packs) * 12;
}

// utils.mjs (no changes needed)
export function weekly_demand(n) {
    if (n < 0) {
        return 0;
    }
    let base = n * 3;
    let extra = (n % 7) * 2;
    if (n >= 40) {
        base += Math.floor(n / 4);
    }
    return base + extra;
}
