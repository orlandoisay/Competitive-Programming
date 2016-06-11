//package javaapplication3;

import java.math.BigInteger;
import java.util.Scanner;

public class JavaApplication3 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t= scn.nextInt();
               
        while(t-- > 0) {
            BigInteger A = scn.nextBigInteger();
            BigInteger B = scn.nextBigInteger();
            
            System.out.println(A.multiply(B));
        }
    }
    
}
