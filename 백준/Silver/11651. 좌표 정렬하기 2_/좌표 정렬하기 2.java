import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[][] arr = new int[n][2];

        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            arr[i][0] = Integer.parseInt(st.nextToken()); // x
            arr[i][1] = Integer.parseInt(st.nextToken()); // y
        }

        Arrays.sort(arr, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) { //a좌표와 b 좌표를 비교한다
                if (a[1] == b[1]) { //a[1], b[1] 는 y 값이다.
                    return a[0] - b[0]; // y가 같으면 x 끼리 비교한다.
                }
                return a[1] - b[1]; // y가 다르면 y끼리 비교한다. 
            }
        });

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sb.append(arr[i][0]).append(" ").append(arr[i][1]).append("\n");
        }

        System.out.print(sb);
    }
}