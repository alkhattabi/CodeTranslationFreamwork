public class Utils {
    public static int category_balance(int n) {
        n = Math.max(-200, Math.min(200, n));

        List<Integer> amounts = new ArrayList<>();
        amounts.add(n);
        amounts.add(12);
        amounts.add(n / 2);
        amounts.add(-7);
        amounts.add(n % 9);
        amounts.add(4);
        amounts.add(-n / 3);

        Map<String, Integer> sums = new HashMap<>();
        for (int amount : amounts) {
            if (sums.containsKey(frame.category.get(amount))) {
                sums.put(frame.category.get(amount), sums.get(frame.category.get(amount)) + amount);
            } else {
                sums.put(frame.category.get(amount), amount);
            }
        }

        int result = 2 * sums.get("A") + sums.get("B") - sums.get("C");
        return result;
    }
}

Note: The provided Java code assumes the existence of a 'frame' object with 'category' and 'amount' fields, which is not defined in the given Python code. The Java code also assumes that 'frame.category.get(amount)' and 'frame.category.get(amount)' are valid methods for retrieving category information from an amount, which might not be the case in the original Python code. The Java code also assumes that 'frame' is a predefined object or context, which is not specified in the Python code. Therefore, the translation is based on the provided Java structure and the Python function's logic.
