// service.mjs
import { unitPrice } from './utils.mjs';

export function gross(n) {
    if (n < 0) {
        return 0;
    }
    return n * unitPrice(n);
}
