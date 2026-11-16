export function number_strength(n) {
    const absN = Math.abs(n);
    let value = absN % 1500 + 2;
    let phi = Math.floor(Math.sqrt(value));
    let divisorCount = Math.floor(value / phi);
    return phi + 5 * divisorCount + factorSignature(absN);
}
