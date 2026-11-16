// service.mjs

import { renewal_date } from "./utils.mjs";

export function grace_period(n) {
    const renewed = renewal_date(n);
    if (renewed < 0) {
        return -1;
    }
    const year = Math.floor(renewed / 10000);
    const month = Math.floor((renewed / 100) % 100);
    const day = renewed % 100;
    const due = new Date(year, month, day);
    due.setDate(due.getDate() + 2);
    due.setMonth(due.getMonth() + 7);
    return due.getFullYear() * 10000 + due.getMonth() * 100 + due.getDate();
}
