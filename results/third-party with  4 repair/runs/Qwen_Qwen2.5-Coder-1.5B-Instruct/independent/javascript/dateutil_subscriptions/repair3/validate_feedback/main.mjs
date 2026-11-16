import { gracePeriod } from "./service.mjs";
import { renewalDate } from "./utils.mjs";

export function solve(n) {
    const renewed = renewalDate(n);
    const deadline = gracePeriod(n);
    if (renewed < 0 || deadline < 0) {
        return -1;
    }
    const [y1, m1, d1] = [Math.floor(renewed / 10000), Math.floor((renewed / 100) % 100), renewed % 100];
    const [y2, m2, d2] = [Math.floor(deadline / 10000), Math.floor((deadline / 100) % 100), deadline % 100];
    const days = (new Date(y2, m2, d2) - new Date(y1, m1, d1)).getDate();
    return days * 100 + d2;
}
