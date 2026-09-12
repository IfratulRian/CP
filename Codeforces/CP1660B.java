import java.util.*;
import java.lang.*;
import java.io.*;

public class CF1660B
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- >0){
		    int n;
		    n=sc.nextInt();
		    int mx=0,scnd=0;
		    for(int i=0;i<n;i++){
		        int x=sc.nextInt();
		        if(x>mx){
		            scnd=mx;
		            mx=x;
		        }
		        else if(x>scnd)scnd=x;
		    }
		    
		        if(mx<=scnd+1)System.out.println("YES");
		        else System.out.println("NO");
		}
	}
}
