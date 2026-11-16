package com.example;

import com.example.Utils;
import com.example.Service;

public class Main {
    public static int solve(int n) {
        int blocks = Utils.weightBlocks(n);
        if (blocks == 0) {
            return 0;
        }
        int cost = Service.transportCost(n);
        int fuel = (cost * 8 + 99) / 100;
        int insurance = 300 if blocks >= 10 else 100;
        return cost + fuel + insurance;
    }
}
