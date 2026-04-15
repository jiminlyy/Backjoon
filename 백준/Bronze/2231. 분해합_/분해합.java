import java.util.*;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int result = 0;

        for(int i = 1; i <= n; i++){
            int k = i;
            int total = i;

            while(k > 0){
                total += k % 10;
                k /= 10;
            }

            if(total == n){
                result = i;
                break;
            }
        }

        System.out.println(result);
    }
}