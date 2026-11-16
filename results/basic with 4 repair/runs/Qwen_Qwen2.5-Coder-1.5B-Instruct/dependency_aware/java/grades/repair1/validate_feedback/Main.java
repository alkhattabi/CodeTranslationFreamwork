package com.example;

public class Main {
    public static int solve(int n) {
        return 1 if bonusScore(n) >= 60 else 0;
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(solve(50)); // Expected output: 1
        System.out.println(solve(-20)); // Expected output: 0
        System.out.println(solve(105)); // Expected output: 1
    }
}

class Service {
    public static int bonus_score(int n) {
        int base = clamp(n);
        return clamp(base + 7);
    }

    private static int clamp(int n) {
        if (n < 0) {
            return 0;
        }
        if (n > 100) {
            return 100;
        }
        return n;
    }
}
