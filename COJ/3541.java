import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int T = Integer.parseInt(scn.nextLine());

        for (int i = 0; i < T; i++) {
            String s = scn.nextLine();
            for (int j = 0; j < s.length(); j++) {
                if(Character.isLowerCase(s.charAt(j)))
                    System.out.print(Character.toUpperCase(s.charAt(j)));
                else if(Character.isUpperCase(s.charAt(j)))
                    System.out.print(Character.toLowerCase(s.charAt(j)));
                else
                    System.out.print(s.charAt(j));
            }
            System.out.println("");
        }
    }
}
