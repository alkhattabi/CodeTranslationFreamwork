// utils.mjs
export function valid_date(n) {
    if (n < 10000101 || n > 99991231) {
        return 0;
    }
    let year = Math.floor(n / 10000);
    let month = Math.floor((n % 100) / 100);
    let day = n % 100;
    if (month < 1 || month > 12 || day < 1) {
        return 0;
    }
    let days = 31;
    if (month === 4 || month === 6 || month === 9 || month === 11) {
        days = 30;
    }
    if (month === 2) {
        let leap = (year % 4 === 0 && year % 100!== 0) || year % 400 === 0;
        days = leap? 29 : 28;
    }
    return day <= days? 1 : 0;
}
