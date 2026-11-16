import { renewalDate } from "./utils";

export function grace_period(n) {
    const renewed = renewalDate(n);
    if (renewed < 0) {
        return -1;
    }
    const year = Math.floor(renewed / 10000);
    const month = Math.floor((renewed / 100) % 100);
    const day = renewed % 100;
    const due = new Date(year, month - 1, day).setMonth(due.getMonth() + 2, due.getDate() + 7);
    return due.getFullYear() * 10000 + due.getMonth() * 100 + due.getDate();
}
