// service.mjs
export function scoreDigits(n) {
    const digitSum = require('./utils').digitSum;
    n = Math.abs(n);
    let total = 0;
    while (n > 0) {
        total += digitSum(n % 10);
        n = Math.floor(n / 10);
    }
    return total * 3;
}
