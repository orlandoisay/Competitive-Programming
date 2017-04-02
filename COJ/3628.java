import java.util.*;
public class acronyms {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        String s1,s2;
        boolean b=false;
        leer.hasNext();
        while(leer.hasNext()){
            s1 = leer.nextLine();
            s2 = leer.nextLine();
            String ar1[]= s1.split(" ");
            String ar2[]= s2.split(" ");
            
            for(int i = 0;i<ar1.length;i++){
                if(ar1[i].charAt(0) == ar2[i].charAt(0)){
                    b = true;
                }else{
                    b = false;
                    break;
                }
            }
            
            if(b){
                System.out.println("yes");
            }else{
                System.out.println("no");
            }
        }
    }
    
}