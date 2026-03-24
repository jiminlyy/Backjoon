import java.util.Scanner;

public class Main{
    public static int gcd(int a, int b){
        if(b ==0) return a;
        int temp = a%b;
        a = b;
        b = temp;
        return gcd(a,b);
        
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int xa = sc.nextInt();
        int ya = sc.nextInt();
        int xb = sc.nextInt();
        int yb = sc.nextInt();
        int xt;
        int g = gcd(ya, yb);
        int yt = ya* yb /g;
        xa = xa * (yt/ya);
        xb = xb * (yt/yb);
        xt = xa + xb;
        int lg = gcd(xt, yt);
        xt /= lg;
        yt /= lg;
        
        System.out.println(xt + " "+ yt);
        
        
    }
}