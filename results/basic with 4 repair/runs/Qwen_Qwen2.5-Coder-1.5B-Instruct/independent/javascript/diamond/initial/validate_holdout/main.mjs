import { weighted } from './service.mjs';
import { normalize } from './utils.mjs';

export function solve(n) {
    return weighted(n) + normalize(n);
}
