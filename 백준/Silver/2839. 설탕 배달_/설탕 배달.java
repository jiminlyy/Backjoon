import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int answer = -1;

        for (int five = 0; five <= n / 5; five++) {
            int remain = n - (5 * five);

            if (remain % 3 == 0) {
                int three = remain / 3;
                int total = five + three;

                if (answer == -1 || total < answer) {
                    answer = total;
                }
            }
        }

        System.out.println(answer);
    }
}