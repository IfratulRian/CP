import java.util.*;

public class CF2260A{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){
            int n = sc.nextInt();
            int count0 = 0;

            int[] a = new int[n];

            for(int i=0;i<n;i++){
                a[i] = sc.nextInt();
                if(a[i] == 0)count0++;
            }

            if(count0 < 2)System.out.println(-1);
            else{
                int ans=0;

                if(a[0] == 1)ans++;
                if(a[n-1] == 1)ans++;

                System.out.println(ans);
            }
        }
    }
}
