// service.mjs
import { digit_sum } from "./utils.mjs";

export function score_digits(n) {
    return digit_sum(n) * 3;
}
