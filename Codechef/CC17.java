import java.util.*;
import java.lang.*;
import java.io.*;
public class CC17
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- >0)
		{
		    int n = sc.nextInt();
		    int h = 0;
		    for (int i = 1 ;  ; i++)
		    {
		        if(i*20 <= (n*60))h++;
		        else break;
		    }
		    System.out.println(h);
		}
	}
}
