import java.math.BigInteger;
import java.util.Scanner;

public class p1407 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        
        for(int i=0;i<10;i++) {
            BigInteger a = scn.nextBigInteger();
            BigInteger b = scn.nextBigInteger();
            
            System.out.println(a.add(b).divide(new BigInteger("2")));
            System.out.println(a.subtract(b).divide(new BigInteger("2")));
        }
    }            
}
