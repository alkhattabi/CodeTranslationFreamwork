// utils.js
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
