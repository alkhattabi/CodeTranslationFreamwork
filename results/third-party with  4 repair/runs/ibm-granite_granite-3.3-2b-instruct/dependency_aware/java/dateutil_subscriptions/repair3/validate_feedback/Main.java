public class Main {
    public static int solve(int n) {
        int renewed = Utils.renewal_date(n);
        if (renewed < 0) {
            return -1;
        }
        int year1, month1, day1;
        int year2, month2, day2;
        year1 = renewed / 10000;
        month1 = (renewed / 100) % 100;
        day1 = renewed % 100;
        year2 = grace_period(n) / 10000;
        month2 = (grace_period(n) / 100) % 100;
        day2 = grace_period(n) % 100;
        try {
            Date renewalDate = new Date(year1, month1, day1);
            Date endDate = new Date(year2, month2, day2);
            endDate.setTime(endDate.getTime() + 1000 * 60 * 60 * 24); // 1 day in milliseconds
            int days = (endDate.getTime() - renewalDate.getTime()) / (1000 * 60 * 60 * 24);
            return days * 100 + day2;
        } catch (Exception e) {
            return -1;
        }
    }
}

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
