export function categoryBalance(n) {
    n = Math.max(-200, Math.min(200, n));
    const frame = [
        {"category": "A", "amount": n},
        {"category": "B", "amount": 12},
        {"category": "A", "amount": n / 2},
        {"category": "C", "amount": -7},
        {"category": "B", "amount": 9 % 10},
        {"category": "C", "amount": 4},
        {"category": "A", "amount": -n / 3}
    ];

    const sums = frame.reduce((acc, curr) => {
        acc[curr.category] = (acc[curr.category] || 0) + curr.amount;
        return acc;
    }, {});

    return Math.floor(2 * sums["A"] + sums["B"] - sums["C"]);
}
