// utils.js
export function taxable_income(n) {
    if (n <= 500) {
        return 0;
    }
    let income = n - 500;
    if (income > 20000) {
        income = 20000;
    }
    return income;
}
