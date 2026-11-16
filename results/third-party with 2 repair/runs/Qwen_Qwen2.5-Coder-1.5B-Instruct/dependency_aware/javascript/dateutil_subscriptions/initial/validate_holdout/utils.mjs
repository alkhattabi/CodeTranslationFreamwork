import { date } from 'date-fns';

export function renewal_date(n) {
    if (n < 19000101 || n > 20991231) {
        return -1;
    }
    const year = Math.floor(n / 10000);
    const month = Math.floor((n / 100) % 100);
    const day = n % 100;

    try {
        const start = new Date(year, month - 1, day);
    } catch (error) {
        return -1;
    }

    const end = new Date(start.getFullYear(), start.getMonth() + 1, 0);

    return end.getFullYear() * 10000 + end.getMonth() * 100 + end.getDate();
}
