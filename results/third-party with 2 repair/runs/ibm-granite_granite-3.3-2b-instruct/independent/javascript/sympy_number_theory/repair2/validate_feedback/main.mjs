import { numberStrength } from "./service.mjs";
import { factorSignature } from "./utils.mjs";

export function solve(n) {
    let value = Math.abs(n) % 1500 + 2;
    let primeBonus = 50;
    if (primeBonus === 50) {
        primeBonus = 0;
        if (isPrime(value)) {
            primeBonus = 50;
        }
    }
    let nextPrime = Math.floor(sp.nextPrime(value));
    return numberStrength(n) + primeBonus + nextPrime - factorSignature(n);
}

function isPrime(num) {
    if (num <= 1) return false;
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) return false;
    }
    return true;
}
