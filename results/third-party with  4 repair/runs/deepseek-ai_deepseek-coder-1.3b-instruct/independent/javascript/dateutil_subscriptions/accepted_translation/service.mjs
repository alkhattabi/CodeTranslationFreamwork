import { renewal_date } from "./utils.mjs";

export function grace_period(n) {
    const renewed = renewal_date(n);
    if (renewed < 0) {
        return -1;
    }
    const year = Math.floor(renewed / 10000);
    const month = Math.floor((renewed - year * 10000) / 100);
    const day = renewed - year * 10000 - month * 100;
    const due = new Date(year, month - 1, day);
    due.setMonth(due.getMonth() + 2);
    return due.getFullYear() * 10000 + due.getMonth() * 100 + due.getDate();
}
