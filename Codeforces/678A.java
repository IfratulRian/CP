import java.util.*;
import java.lang.*;
import java.io.*;

public class CF678A
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		long n,k;
		n=sc.nextLong();
		k=sc.nextLong();
// 		for(long i=n+1;;i++){
// 		    if(i%k==0){
// 		        System.out.println(i);
// 		        break;
// 		    }
// 		}
        long x=(n/k +1)*k;
        System.out.println(x);
	}
}
