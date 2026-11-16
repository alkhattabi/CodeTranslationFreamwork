package com.example;

public class Service {
    public static int rolling_alert(int n) {
        n = Math.max(-200, Math.min(200, n));
        Series series = new Series(new double[]{n % 13, (n / 2) % 13, n % 17, Math.abs(n) % 11, n % 7});
        Series rolling = series.rolling(3, 1).sum();
        int alerts = (int)((rolling.get(0) >= 15) ? 1 : 0) +
                      (int)((rolling.get(1) >= 15) ? 1 : 0) +
                      (int)((rolling.get(2) >= 15) ? 1 : 0);
        return alerts * 10 + (int)(Math.floor(Utils.category_balance(n) / 23));
    }
}

class Utils {
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
        
        Series sums = frame.groupby("category").agg({"amount": "sum"});
        return (int)(2 * sums.get("A") + sums.get("B") - sums.get("C"));
    }
    
    private static class DataFrame {
        private List<Object[]> data;
        private String[] columns;

        public DataFrame(Object[][] data, String[] columns) {
            this.data = Arrays.asList(data);
            this.columns = columns;
        }

        public Series agg(String column) {
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

        public double get(String key) {
            return values.get(key);
        }
    }
}
