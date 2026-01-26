import java.util.*;
public class Half_pyramid {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n;
        n=in.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
