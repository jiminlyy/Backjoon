import java.util.*;

public class Main{
    public static long gcd(long a, long b){
        while(b!=0){
        long temp = a%b;
        a = b;
        b = temp;
        }
        return a; 
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long result = a*b /gcd(a,b);
        
        System.out.println(result);
    }
}