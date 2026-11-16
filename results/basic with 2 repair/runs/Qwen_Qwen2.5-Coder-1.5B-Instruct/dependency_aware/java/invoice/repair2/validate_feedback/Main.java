package com.example;

public class Main {
    public static int solve(int n) {
        if (n < 0) {
            return 0;
        }
        return n * Utils.unitPrice(n) + (n * Utils.unitPrice(n) * 15) / 100;
    }
}
