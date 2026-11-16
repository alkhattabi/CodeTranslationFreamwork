public class Utils {
    public static int renewal_date(int n) {
        if (n < 19000101 || n > 20991231) {
            return -1;
        }
        int year = n / 10000;
        int month = (n / 100) % 100;
        int day = n % 100;
        try {
            LocalDate start = LocalDate.of(year, month, day);
            LocalDate end = start.plusMonths(1);
            return end.getYear() * 10000 + end.getMonthValue() * 100 + end.getDayOfMonth();
        } catch (Exception e) {
            return -1;
        }
    }
}
