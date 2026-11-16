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
