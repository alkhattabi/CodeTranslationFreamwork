package com.example;

public class Utils {
    public static int weightBlocks(int n) {
        if (n <= 0) {
            return 0;
        }
        if (n > 10000) {
            n = 10000;
        }
        return (n + 499) / 500;
    }
}
