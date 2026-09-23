import java.util.*;

public class CF2266A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long c = sc.nextLong();
            long ans = Math.max(Math.abs(a - b), Math.abs(a + c - b));
            System.out.println(ans);
        }
    }
}
