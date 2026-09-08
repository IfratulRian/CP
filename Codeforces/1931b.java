import java.util.*;
import java.lang.*;
import java.io.*;

public class CF1931B
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            long sum = 0;
            long[] a = new long[n];
            for(int i=0;i<n;i++){
                a[i] = sc.nextLong();
                sum += a[i];
            }
            long avg = sum/n;
            long pref = 0;
            int f=0;
            for(int i=0;i<n;i++){
                pref += a[i];
                if(pref < avg*(i+1)){
                    f = 1;
                    break;
                }
            }
            if(f == 0)System.out.println("YES");
            else System.out.println("NO");
        }

	}
}
