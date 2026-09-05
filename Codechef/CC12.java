import java.util.*;
import java.lang.*;
import java.io.*;

class CC12
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t-- > 0){
		    int x=sc.nextInt();
		    int k=sc.nextInt();
		    if((x*7)-k>0){
		        System.out.println((x*7)-k);
		    }
		    else System.out.println(0);
		}
	}
}
