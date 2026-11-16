// main.mjs
import { matrixEnergy } from "./service.mjs";
import { vectorSignature } from "./utils.mjs";

export function solve(n) {
    const energy = matrixEnergy(n);
    const vector = new Float64Array([energy, vectorSignature(n), n]);
    const bounded = new Float64Array(vector.length).fill(-Infinity);
    let positiveSum = 0;

    for (let i = 0; i < vector.length; i++) {
        if (vector[i] > 0) {
            bounded[i] = vector[i];
            positiveSum += vector[i];
        } else {
            bounded[i] = -vector[i];
        }
    }

    const result = bounded.reduce((acc, val) => acc + val, 0) + (energy % 17);
    return Math.round(result);
}

// service.mjs
import { vectorSignature } from "./utils.mjs";

export function matrix_energy(n) {
    // Ensure n is within the valid range [-100, 100]
    n = Math.max(-100, Math.min(100, n));

    // Create a 3x3 matrix with elements based on n's remainder when divided by 5, 7, and 3
    const m = [
        [n % 5, 2, -1],
        [3, n % 7, 4],
        [1, 5, n % 3]
    ];

    // Calculate the square of the matrix
    const square = m.map(row => row.map(val => val ** 2));

    // Calculate the sum of the diagonal elements of the square matrix
    const diagonal = square.reduce((sum, row) => sum + row[0], 0);

    // Calculate the signature of n using the vector_signature function
    const signature = vectorSignature(n);

    // Return the sum of the diagonal and the signature
    return diagonal + signature;
}

// utils.mjs
export function vector_signature(n) {
    n = Math.max(-100, Math.min(100, n));
    const v = [n % 11, Math.abs(n) % 7, Math.floor(n / 3) % 9];
    const m = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ];
    const out = m.map(row => row.reduce((acc, val) => acc + val * v[row.indexOf(val)], 0));
    return Math.abs(out.reduce((acc, val) => acc + val, 0));
}
