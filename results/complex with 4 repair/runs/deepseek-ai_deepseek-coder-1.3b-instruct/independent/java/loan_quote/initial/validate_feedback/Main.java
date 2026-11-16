public class Main {
    public static int solve(int n) {
        int band = Utils.creditBand(n);
        if (band == 0) {
            return -1;
        }
        int principal = 10000 + (n - 300) * 10;
        int interest = Service.yearlyInterest(n);
        int fee = band >= 3 ? 150 : 350;
        int total = principal + interest + fee;
        return (total + 11) / 12;
    }
}
