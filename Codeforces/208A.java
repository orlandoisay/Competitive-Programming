import java.util.Scanner;

public class Main {    
    public static void main(String[] args) {
       Scanner scn = new Scanner(System.in);
       
       String orig = new String();
       orig = scn.nextLine();
       
       String[] msg = orig.split("WUB");
       
       for(int i=0;i<msg.length;i++) {
           if(msg[i].length()>0) {
               System.out.print(msg[i]);
               System.out.print(" ");
           }
       }
    }    
}