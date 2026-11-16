// Importing required module
import { factor_signature } from "./utils.mjs";

// Exporting the function
export function number_strength(n) {
    let value = Math.abs(n) % 1500 + 2;
    let phi = Math.floor(Math.totent(value)); // Using Math.totent for totient function
    let divisorCount = Math.floor(Math.divisorCount(value));
    return phi + 5 * divisorCount + factor_signature(n);
}
