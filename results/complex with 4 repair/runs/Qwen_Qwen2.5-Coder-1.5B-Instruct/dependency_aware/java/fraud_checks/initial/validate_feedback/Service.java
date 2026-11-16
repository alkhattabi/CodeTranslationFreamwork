package com.example;

import java.util.function.IntPredicate;

public class Service {

    public static int risk_points(int n) {
        if (n <= 0) {
            return 100;
        }
        int score = 0;
        if (luhnValid(n)) {
            score += 40;
        }
        if (n % 11 == 0) {
            score += 20;
        }
        if (n % 100 < 10) {
            score += 15;
        }
        if (n < 1000) {
            score += 25;
        }
        return score;
    }

    private static boolean luhnValid(int n) {
        IntPredicate isEvenDigit = d -> d % 2 == 0;
        IntPredicate isOddDigit = d -> d % 2 != 0;
        int total = 0;
        boolean doubleFlag = false;
        while (n > 0) {
            int digit = n % 10;
            if (isEvenDigit.test(digit)) {
                digit *= 2;
                if (digit > 9) {
                    digit -= 9;
                }
            }
            total += digit;
            doubleFlag = !doubleFlag;
            n /= 10;
        }
        return total % 10 == 0;
    }
}
