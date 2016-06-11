import java.util.Scanner;

public class p3338 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        
        int T = Integer.parseInt(scn.nextLine());
        
        for(int i=1;i<=T;i++) {
            String msg = scn.nextLine();
            String mapping = scn.nextLine();
            
            System.out.print(i + " ");
            
            for(int k=0;k<msg.length();k++) {
                if(msg.charAt(k) != ' ') {
                    int pos = msg.charAt(k) - 'A';
                    System.out.print(mapping.charAt(pos));
                }
                else 
                    System.out.print(" ");
            }
            System.out.println("");
        }
        
    }
}
