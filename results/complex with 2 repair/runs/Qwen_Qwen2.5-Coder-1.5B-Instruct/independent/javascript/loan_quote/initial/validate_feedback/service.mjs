import { credit_band } from './utils.mjs';

export function yearly_interest(n) {
    const band = credit_band(n);
    if (band === 0) {
        return -1;
    }
    let principal = 10000 + (n - 300) * 10;
    let rate = 18 - band * 3;
    let interest = principal * rate / 100;
    if (principal > 14000) {
        interest += 125;
    }
    return interest;
}
