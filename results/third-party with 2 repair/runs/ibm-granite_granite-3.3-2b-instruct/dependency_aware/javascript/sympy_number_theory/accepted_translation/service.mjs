// service.mjs
import { factor_signature } from "./utils.mjs";

export function number_strength(n) {
    const value = Math.abs(n) % 1500 + 2;
    const phi = Math.floor(value - 1);
    const divisor_count = Math.floor(value / value);
    return phi + 5 * divisor_count + factor_signature(n);
}
