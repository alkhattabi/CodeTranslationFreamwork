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
