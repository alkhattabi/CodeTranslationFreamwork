export function renewal_date(n) {
    if (n < 19000101 || n > 20991231) {
        return -1;
    }
    let year = Math.floor(n / 10000);
    let month = Math.floor((n / 100) % 100);
    let day = n % 100;
    let start = new Date(year, month - 1, day);
    if (isNaN(start.getTime())) {
        return -1;
    }
    let end = new Date(start.getTime());
    end.setMonth(start.getMonth() + 1);
    return end.getFullYear() * 10000 + (end.getMonth() + 1) * 100 + end.getDate();
}
