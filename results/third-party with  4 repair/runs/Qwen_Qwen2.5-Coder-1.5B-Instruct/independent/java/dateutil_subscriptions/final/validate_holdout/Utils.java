public class Utils {
    public static int renewal_date(int n) {
        if (n < 19000101 || n > 20991231) {
            return -1;
        }
        int year = n / 10000;
        int month = (n / 100) % 100;
        int day = n % 100;
        try {
            java.util.Date start = new java.util.Date(year - 1900, month - 1, day);
        } catch (IllegalArgumentException e) {
            return -1;
        }
        java.util.Calendar calendar = java.util.Calendar.getInstance();
        calendar.setTime(start);
        calendar.add(java.util.Calendar.MONTH, 1);
        return calendar.get(java.util.Calendar.YEAR) * 10000 + calendar.get(java.util.Calendar.MONTH) * 100 + calendar.get(java.util.Calendar.DAY_OF_MONTH);
    }
}
