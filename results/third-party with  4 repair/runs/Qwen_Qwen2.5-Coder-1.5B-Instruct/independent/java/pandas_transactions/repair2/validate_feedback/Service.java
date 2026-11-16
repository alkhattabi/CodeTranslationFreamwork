package com.example;

import org.apache.commons.math3.stat.descriptive.DescriptiveStatistics;
import org.apache.commons.math3.stat.descriptive.rank.Percentile;
import org.apache.commons.math3.util.MathArrays;

import java.util.Arrays;
import java.util.List;

public class Service {

    public static int rolling_alert(int n) {
        n = Math.max(-200, Math.min(200, n));
        List<Integer> series = Arrays.asList(n % 13, (n / 2) % 13, n % 17, Math.abs(n) % 11, n % 7);
        DescriptiveStatistics stats = new DescriptiveStatistics(series);
        double median = stats.getPercentile(50);
        int alerts = (int) Math.ceil(median / 15);
        return alerts * 10 + Math.abs(Utils.category_balance(n)) % 23;
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(rolling_alert(100)); // Output will depend on the actual implementation of Utils.category_balance
    }
}
