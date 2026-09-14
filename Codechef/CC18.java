import java.util.*;
import java.lang.*;
import java.io.*;
class CC18
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for (int i=1;i<=t;i++ ){
		    int n=sc.nextInt();
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    int z=(x*y);
		    if(z>n){
		        System.out.println("yes");
		    }
		    else if (n==z){
		       System.out.println("yes");
		   } 
		    else{
		        System.out.println("no");
		    }
		} 
	}
}
