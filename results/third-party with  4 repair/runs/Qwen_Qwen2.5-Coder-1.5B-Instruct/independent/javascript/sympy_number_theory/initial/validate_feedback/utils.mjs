export function factor_signature(n) {
    const absN = Math.abs(n);
    let value = absN % 1500 + 2;
    const factors = {};
    for (let i = 2; i <= Math.sqrt(value); i++) {
        while (value % i === 0) {
            if (!factors[i]) {
                factors[i] = 0;
            }
            factors[i]++;
            value /= i;
        }
    }
    if (value > 1) {
        factors[value] = 1;
    }
    let score = 0;
    for (const [prime, exponent] of Object.entries(factors)) {
        score += parseInt(prime) * parseInt(exponent);
    }
    return score + 3 * Object.keys(factors).length;
}
