int digit_sum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += abs(n % 10);
        n /= 10;
    }
    return sum;
}
