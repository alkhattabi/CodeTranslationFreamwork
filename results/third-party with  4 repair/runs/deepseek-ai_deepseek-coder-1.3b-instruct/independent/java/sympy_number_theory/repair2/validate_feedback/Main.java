import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import sympy.ntheory.factorint;
import sympy.ntheory.primetest;

public class Main {
    public static int solve(int n) {
        int value = Math.abs(n) % 1500 + 2;
        int primeBonus = Primetest.isprime(value) ? 50 : 0;
        BigInteger nextPrime = BigInteger.valueOf(value).nextProbablePrime();
        nextPrime = nextPrime.intValue();
        return numberStrength(n) + primeBonus + nextPrime - factorSignature(n);
    }

    public static int numberStrength(int n) {
        // Implementation of numberStrength function
        return 0;
    }

    public static int factorSignature(int n) {
        List<BigInteger> factors = factorint.factorint(n).values();
        int sum = 0;
        for (BigInteger factor : factors) {
            sum += factor.intValue();
        }
        return sum;
    }
}
