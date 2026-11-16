public class Main {
    public static int solve(int n) {
        int energy = Service.matrix_energy(n);
        int[] vector = {energy, Utils.vector_signature(n), n};
        int[] bounded = new int[3];
        for (int i = 0; i < 3; i++) {
            bounded[i] = Math.max(-150, Math.min(250, vector[i]));
        }
        int[] positives = new int[3];
        for (int i = 0; i < 3; i++) {
            positives[i] = bounded[i] > 0? bounded[i] : -bounded[i];
        }
        return (int) (positives[0] + (energy % 17) + energy);
    }
}
