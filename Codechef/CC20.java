import java.util.*;
import java.lang.*;
import java.io.*;

class CC20
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int diff = a-b;
		if(diff%2==0){
		    System.out.println(diff/2);
		}
		else{
		    System.out.println(-1);
		}
	}
}
