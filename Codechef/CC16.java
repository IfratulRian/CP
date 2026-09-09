import java.util.*;
import java.lang.*;
import java.io.*;

class CC16
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int x = sc.nextInt();
		    if(x<3){
		        System.out.println("Light");
		    }
		    else if(x>=3 && x<7){
		        System.out.println("Moderate");
		    }
		    else{
		        System.out.println("Heavy");
		    }
		}
	}
}
