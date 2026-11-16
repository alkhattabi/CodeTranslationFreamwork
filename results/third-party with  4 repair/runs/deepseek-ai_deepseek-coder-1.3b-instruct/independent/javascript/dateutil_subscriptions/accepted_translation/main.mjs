import { grace_period } from "./service.mjs";
import { renewal_date } from "./utils.mjs";

export function solve(n) {
    const renewed = renewal_date(n);
    const deadline = grace_period(n);
    if (renewed < 0 || deadline < 0) {
        return -1;
    }
    const y1 = Math.floor(renewed / 10000);
    const m1 = Math.floor((renewed / 100) % 100);
    const d1 = renewed % 100;
    const y2 = Math.floor(deadline / 10000);
    const m2 = Math.floor((deadline / 100) % 100);
    const d2 = deadline % 100;
    const days = (new Date(y2, m2 - 1, d2) - new Date(y1, m1 - 1, d1)).getTime() / (1000 * 60 * 60 * 24);
    return Math.floor(days) * 100 + d2;
}
