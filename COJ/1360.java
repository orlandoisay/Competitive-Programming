//package javaapplication3;

import java.math.BigInteger;
import java.util.Scanner;

public class JavaApplication3 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        BigInteger A = new BigInteger("0");
        BigInteger B = new BigInteger("0");
        BigInteger T = new BigInteger("0");
        
        BigInteger C = new BigInteger("0");
        BigInteger X = new BigInteger("1");
        
        while(true) {
            A = scn.nextBigInteger();
            B = scn.nextBigInteger();

            if(A.equals(C) && B.equals(C)) {
                break;
            }
            
            System.out.print(A);
            System.out.print("/");
            System.out.print(B);
            System.out.print("=[");
            
            while(!A.equals(B)) {
                System.out.print(A.subtract(X).divide(B));
                System.out.print(",");
                T = B;                
                B = A.subtract(B.multiply(A.subtract(X).divide(B)));
                A = T;
            }
            
            System.out.print("1]\n");
        }
    }
    
}
