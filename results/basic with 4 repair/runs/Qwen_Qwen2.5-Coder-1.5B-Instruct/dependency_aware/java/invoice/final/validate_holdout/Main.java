package com.example;

public class Main {
    public static int solve(int n) {
        if (n < 0) {
            return 0;
        }
        return n * Utils.unit_price(n) + (n * Utils.unit_price(n) * 15) / 100;
    }
}
