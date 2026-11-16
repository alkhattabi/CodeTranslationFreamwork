package com.example;

import java.util.function.Function;

public class Main {

    public static int solve(int n) {
        int value = n * 4 - discount(n);
        return Math.max(0, value);
    }

    // Dependency call
    private static int discount(int n) {
        return Service.tier(n) * 5;
    }

    // Example usage of the dependency
    public static void main(String[] args) {
        System.out.println(solve(10)); // Expected output: 20
    }
}

// Service.java
package com.example;

public class Service {

    public static int tier(int n) {
        // Implementation of tier method
        return n; // Placeholder for actual implementation
    }
}
