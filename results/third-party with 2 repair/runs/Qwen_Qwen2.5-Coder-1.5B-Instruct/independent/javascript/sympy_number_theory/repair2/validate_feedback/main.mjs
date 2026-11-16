export function solve(n) {
    const absN = Math.abs(n);
    let value = absN % 1500 + 2;
    let primeBonus = 50;
    if (isPrime(value)) {
        primeBonus = 0;
    }
    let nextPrime = nextPrime(value);
    return numberStrength(n) + primeBonus + nextPrime - factorSignature(n);
}

function isPrime(num) {
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) {
            return false;
        }
    }
    return num > 1;
}

function nextPrime(num) {
    while (true) {
        num++;
        if (isPrime(num)) {
            return num;
        }
    }
}
