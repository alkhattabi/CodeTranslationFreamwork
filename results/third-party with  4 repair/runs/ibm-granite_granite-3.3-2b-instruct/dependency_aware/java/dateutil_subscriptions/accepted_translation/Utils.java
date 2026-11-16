public class Utils {
    public static int renewal_date(int n) {
        if (n < 19000101 || n > 20991231) {
            return -1;
        }
        int year = n / 10000;
        int month = (n / 100) % 100;
        int day = n % 100;
        try {
            Date date = new Date(year, month, day);
        } catch (Exception e) {
            return -1;
        }
        Date end = new Date(date.getTime() + 1000 * 60 * 60 * 24); // 1 day in milliseconds
        int yearEnd = end.getYear() * 10000;
        int monthEnd = end.getMonth() + 1;
        int dayEnd = end.getDate();
        return yearEnd * 10000 + monthEnd * 100 + dayEnd;
    }
}
