package com.example;

import com.example.utils.Utils;

public class Service {

    public static int upgrade_cost(int n) {
        int rank = Utils.release_rank(n);
        if (rank < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        Version current = new Version(String.format("%d.%d.%d", major, minor, patch));
        Version required = new Version("2.1.0");
        int penalty = current.compareTo(required) < 0 ? 40 : 0;
        return rank * 25 + minor + patch / 5 + penalty;
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(upgrade_cost(12345)); // Output will depend on the actual implementation of release_rank
    }
}
