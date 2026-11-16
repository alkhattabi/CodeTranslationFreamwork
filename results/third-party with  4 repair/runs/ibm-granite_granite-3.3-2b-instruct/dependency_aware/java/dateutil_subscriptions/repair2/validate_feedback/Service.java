public class Service {
    public static int grace_period(int n) {
        int renewed = renewal_date(n);
        if (renewed < 0) {
            return -1;
        }
        int year = renewed / 10000;
        int month = (renewed / 100) % 100;
        int day = renewed % 100;
        Date end = new Date(year, month, day);
        end.setTime(end.getTime() + 1000 * 60 * 60 * 24); // 1 day in milliseconds
        int yearEnd = end.getYear() * 10000;
        int monthEnd = end.getMonth() + 1;
        int dayEnd = end.getDate();
        return yearEnd * 10000 + monthEnd * 100 + dayEnd;
    }
}

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

Note: The Java code uses `Date` class for date manipulation, which is not recommended for new development due to its deprecation. It's suggested to use `java.time` package for date and time manipulation instead.
