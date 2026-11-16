import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

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

public class Service {
    public static int grace_period(int n) {
        int renewed = Utils.renewal_date(n);
        if (renewed < 0) {
            return -1;
        }
        int year, month, day;
        year = renewed / 10000;
        month = (renewed / 100) % 100;
        day = renewed % 100;
        LocalDate due = LocalDate.of(year, month, day).plus(2, ChronoUnit.DAYS);
        return due.getYear() * 10000 + due.getMonthValue() * 100 + due.getDayOfMonth();
    }
}
