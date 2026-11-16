// Importing required module
const { factor_signature } = require("./utils.js");
const { totient } = require("mathjs");

// Exporting the function
export function number_strength(n) {
    let value = Math.abs(n) % 1500 + 2;
    let phi = Math.floor(totient(value));
    let divisorCount = Math.floor(mathjs.divisorCount(value));
    return phi + 5 * divisorCount + factor_signature(n);
}
