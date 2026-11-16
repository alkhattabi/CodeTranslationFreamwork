package com.example;

import java.util.function.IntUnaryOperator;

public class Service {

    public static int score_digits(int n) {
        return digitSum(n) * 3;
    }

    private static int digitSum(int n) {
        n = Math.abs(n);
        int total = 0;
        while (n > 0) {
            total += n % 10;
            n /= 10;
        }
        return total;
    }
}
