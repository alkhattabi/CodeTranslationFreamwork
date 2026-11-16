// main.mjs
export function solve(n) {
    const nights = valid_nights(n);
    if (nights === 0) {
        return -1;
    }
    const rooms = Math.floor(n / 100);
    const charge = lodging_charge(n);
    const cleaning = rooms * 45;
    const tax = (charge + cleaning) * 0.15;
    return charge + cleaning + tax;
}

// service.mjs
export function lodging_charge(n) {
    const validNights = require('./utils').valid_nights;
    let nights = validNights(n);
    if (nights === 0) {
        return 0;
    }
    let rooms = Math.floor(n / 100);
    let charge = rooms * nights * 150;
    if (nights >= 7) {
        charge = Math.floor(charge / 10);
    }
    if (rooms >= 5) {
        charge = Math.floor(charge / 20);
    }
    return charge;
}

// utils.mjs
export function valid_nights(n) {
    if (n <= 0) {
        return 0;
    }
    let rooms = Math.floor(n / 100);
    let nights = n % 100;
    if (rooms < 1 || rooms > 20 || nights < 1 || nights > 30) {
        return 0;
    }
    return nights;
}
