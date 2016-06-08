import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int N = Integer.parseInt(scn.nextLine());

        int[] R = new int[5];
        for(int i=0;i<5;i++)
            R[i] = 0;

        for(int i=0;i<N;i++) {
            String nombre = scn.nextLine();

            String car;
            //1
            car = scn.nextLine();

            if(car.charAt(0) == '#') R[0]++;
            if(car.charAt(1) == '#') R[1]++;
            if(car.charAt(2) == '#') R[0]++;

            //2
            car = scn.nextLine();

            if(car.charAt(0) == '#') R[4]++;
            if(car.charAt(1) == '#') R[3]++;
            if(car.charAt(2) == '#') R[2]++;

            //3
            car = scn.nextLine();

            if(car.charAt(0) == '#') R[0]++;
            if(car.charAt(1) == '#') R[1]++;
            if(car.charAt(2) == '#') R[0]++;

        }

        for(int i=0;i<5;i++) {
            System.out.println(R[i]);
        }
    }
}
