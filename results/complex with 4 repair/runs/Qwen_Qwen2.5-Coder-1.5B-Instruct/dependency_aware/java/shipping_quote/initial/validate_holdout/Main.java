package com.example;

import java.util.function.IntUnaryOperator;

public class Main {
    public static int solve(int n) {
        Utils weightBlocks = Utils::weight_blocks;
        int blocks = weightBlocks.applyAsInt(n);
        if (blocks == 0) {
            return 0;
        }
        int cost = Service.transport_cost(n);
        int fuel = (cost * 8 + 99) / 100;
        int insurance = 300 if blocks >= 10 else 100;
        return cost + fuel + insurance;
    }

    public static void main(String[] args) {
        System.out.println(solve(10)); // Example output
    }
}
