export function category_balance(n) {
    n = Math.max(-200, Math.min(200, n));
    let frame = {
        "category": ["A", "B", "A", "C", "B", "C", "A"],
        "amount": [n, 12, Math.floor(n / 2), -7, Math.floor(n / 9), 4, -Math.floor(n / 3)]
    };
    let sums = frame.amount.reduce((a, b) => a + b, 0);
    return 2 * sums - sums.filter(x => x < 0).reduce((a, b) => a + b, 0);
}
