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
        java.time.LocalDate due = java.time.LocalDate.of(year, month, day).plus(2, java.time.temporal.ChronoUnit.DAYS);
        return due.getYear() * 10000 + due.getMonthValue() * 100 + due.getDayOfMonth();
    }
}
