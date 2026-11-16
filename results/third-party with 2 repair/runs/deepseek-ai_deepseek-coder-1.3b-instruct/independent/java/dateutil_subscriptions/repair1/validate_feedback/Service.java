import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

public class Service {
    public static int gracePeriod(int n) {
        LocalDate renewed = Utils.renewalDate(n);
        if (renewed.isBefore(LocalDate.now())) {
            return -1;
        }
        int year = renewed.getYear();
        int month = renewed.getMonthValue();
        int day = renewed.getDayOfMonth();
        LocalDate due = LocalDate.of(year, month, day).plusMonths(2).plusDays(7);
        return due.getYear() * 10000 + due.getMonthValue() * 100 + due.getDayOfMonth();
    }
}
