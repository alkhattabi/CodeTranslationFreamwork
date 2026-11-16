// service.mjs
export function risk_points(n) {
    if (n <= 0) {
        return 100;
    }
    let score = 0;
    if (luhn_valid(n) === 0) {
        score += 40;
    }
    if (n % 11 === 0) {
        score += 20;
    }
    if (n % 100 < 10) {
        score += 15;
    }
    if (n < 1000) {
        score += 25;
    }
    return score;
}

// utils.mjs (no changes needed)
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
        double =!double;
        n = Math.floor(n / 10);
    }
    return 1 if total % 10 === 0 else 0;
}
