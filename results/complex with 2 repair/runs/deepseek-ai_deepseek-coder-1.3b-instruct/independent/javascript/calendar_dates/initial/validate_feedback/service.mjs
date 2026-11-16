import { valid_date } from "./utils.mjs";

export function day_of_year(n) {
    if (valid_date(n) === 0) {
        return 0;
    }
    let year = Math.floor(n / 10000);
    let month = Math.floor((n / 100) % 100);
    let day = n % 100;
    let total = day;
    let m = 1;
    while (m < month) {
        let days = 31;
        if (m === 4 || m === 6 || m === 9 || m === 11) {
            days = 30;
        }
        if (m === 2) {
            let leap = (year % 4 === 0 && year % 100 !== 0) || year % 400 === 0;
            days = leap ? 29 : 28;
        }
        total += days;
        m += 1;
    }
    return total;
}
