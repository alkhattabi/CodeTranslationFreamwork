// utils.js

function renewal_date(n) {
    if (n < 19000101 || n > 20991231) {
        return -1;
    }
    const year = Math.floor(n / 10000);
    const month = Math.floor((n / 100) % 100);
    const day = n % 100;
    try {
        const start = new Date(year, month, day);
    } catch (e) {
        return -1;
    }
    const end = new Date(start.setDate(start.getDate() + 1));
    return end.getFullYear() * 10000 + end.getMonth() * 100 + end.getDate();
}

export { renewal_date };
