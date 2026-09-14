import java.util.*;
import java.lang.*;
import java.io.*;

public class CF2263A
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- >0){
		    int n = sc.nextInt();
		    int[] arr = new int[n];
		    int Co=0,Ce=0;
		    for(int i=0;i<n;i++){
		        arr[i] = sc.nextInt();
		        if(arr[i] == 1)Co++;
		        else Ce++;
		    }
		    if(Co<Ce)System.out.println("Elsie");
		    else System.out.println("Bessie");
		}

	}
}
