import java.util.*;
import java.lang.*;
import java.io.*;

public class CF1886A
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- >0){
		    long n = sc.nextInt();
		    if(n<7 || n==9){
                System.out.println("NO");
                continue;
            }
            System.out.println("YES");
            if(n%3 == 0)System.out.println("2 5 "+(n-7));
            else if(n%3 == 1)System.out.println("1 4 "+(n- 5));
            else System.out.println("1 2 " + (n - 3));
		}
	}
}
