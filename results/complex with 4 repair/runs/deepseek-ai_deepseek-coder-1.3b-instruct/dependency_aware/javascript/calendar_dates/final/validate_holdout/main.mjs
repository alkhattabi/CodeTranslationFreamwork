import { valid_date } from "./utils.mjs";

export function solve(n) {
    if (valid_date(n) === 0) {
        return -1;
    }
    let year = Math.floor(n / 10000);
    let month = Math.floor((n / 100) % 100);
    let day = n % 100;
    let quarter = Math.floor((month - 1) / 3) + 1;
    return quarter * 1000 + day;
}
