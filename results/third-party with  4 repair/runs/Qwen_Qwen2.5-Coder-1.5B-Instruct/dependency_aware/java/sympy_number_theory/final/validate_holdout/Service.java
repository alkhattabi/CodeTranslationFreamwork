package com.example;

import java.util.Map;

public class Service {
    public static int number_strength(int n) {
        // Convert input to absolute value and then take modulo 1500
        int value = Math.abs(n) % 1500;
        
        // Calculate the number of factors using sympy's factorint function
        import org.sympy.ntheory.factor.FactorInteger;
        FactorInteger factorInt = new FactorInteger();
        Map<Integer, Integer> factors = factorInt.factor(value);
        
        // Calculate the score based on the number of factors and their exponents
        int score = 0;
        for (Map.Entry<Integer, Integer> entry : factors.entrySet()) {
            score += entry.getKey() * entry.getValue();
        }
        
        // Add a bonus for the number of factors
        score += 3 * factors.size();
        
        return score;
    }
}
