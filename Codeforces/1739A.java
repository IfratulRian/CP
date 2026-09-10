import java.util.*;
import java.lang.*;
import java.io.*;

public class 1739A
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- >0){
		    int n,m;
		    n=sc.nextInt();m=sc.nextInt();
		    if(n==2 && m==3)System.out.println(2+" "+2);
		    else if(n==3)System.out.println(2+" "+1);
		    else if(m==3)System.out.println(1+" "+2);
		    else System.out.println(1+" "+1);
		}
	}
}
