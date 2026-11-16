package com.example;

public class Service {
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
