// main.mjs

import { grace_period } from "./service.mjs";
import { renewal_date } from "./utils.mjs";

export function solve(n) {
    const renewed = renewal_date(n);
    const deadline = grace_period(n);
    if (renewed < 0 || deadline < 0) {
        return -1;
    }
    const y1 = renewed / 100000;
    const m1 = (renewed / 100) % 100;
    const d1 = renewed % 100;
    const y2 = deadline / 100000;
    const m2 = (deadline / 100) % 100;
    const d2 = deadline % 100;
    const date1 = new Date(y1 * 10000 + m1 * 100 + d1);
    const date2 = new Date(y2 * 10000 + m2 * 100 + d2);
    const diff = date2.getTime() - date1.getTime();
    return Math.ceil(diff / (1000 * 60 * 60 * 24));
}
