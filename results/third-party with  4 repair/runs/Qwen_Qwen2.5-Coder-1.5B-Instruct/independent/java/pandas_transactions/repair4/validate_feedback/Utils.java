package com.example.utils;

import org.apache.commons.math3.stat.descriptive.DescriptiveStatistics;

public class Utils {

    public static int category_balance(int n) {
        n = Math.max(-200, Math.min(200, n));
        DataFrame frame = new DataFrame(new Object[][]{
            {"category", "amount"},
            {"A", n},
            {"B", 12},
            {"A", n / 2},
            {"C", -7},
            {"B", n % 9},
            {"A", -n / 3}
        }, new String[]{"category", "amount"});

        DescriptiveStatistics stats = new DescriptiveStatistics();
        for (Object[] row : frame.getData()) {
            stats.addValue((Double) row[1]);
        }

        return (int)(2 * stats.getMean() + stats.getSum() - stats.getMin());
    }

    private static class DataFrame {
        private Object[][] data;
        private String[] columns;

        public DataFrame(Object[][] data, String[] columns) {
            this.data = data;
            this.columns = columns;
        }

        public Object[][] getData() {
            return data;
        }

        public Series getSeries(String column) {
            Map<String, Double> result = new HashMap<>();
            for (Object[] row : data) {
                double value = (Double) row[1];
                if (!result.containsKey(column)) {
                    result.put(column, value);
                } else {
                    result.put(column, result.get(column) + value);
                }
            }
            return new Series(result);
        }
    }

    private static class Series {
        private Map<String, Double> values;

        public Series(Map<String, Double> values) {
            this.values = values;
        }

        public double getValue(String key) {
            return values.get(key);
        }
    }
}
