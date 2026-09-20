import java.util.*;
import java.lang.*;
import java.io.*;
class CC23
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=1;i<=n;i++){
		    int X=sc.nextInt();
		    int Y=sc.nextInt();
		    if(Y>X){
		        System.out.println(Y-X);
		    }
		    else{
		        System.out.println(0);
		    }
		}
	}
}
