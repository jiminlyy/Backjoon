import java.util.*;

public class Main{
    public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int [n];
       
        for(int i = 0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int gcdValue = arr[1] - arr[0];

        for (int i = 2; i < n; i++) {
            int gap = arr[i] - arr[i - 1];
            gcdValue = gcd(gcdValue, gap);
        }
    
        int totalTrees = (arr[n - 1] - arr[0]) / gcdValue + 1;
        int answer = totalTrees - n;

        System.out.println(answer);
}
}