export function luhn_valid(n) {
    if (n <= 0) {
        return 0;
    }
    let total = 0;
    let double = false;
    while (n > 0) {
        let digit = n % 10;
        if (double) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        total += digit;
        double = !double;
        n = Math.floor(n / 10);
    }
    return (total % 10 == 0) ? 1 : 0;
}
