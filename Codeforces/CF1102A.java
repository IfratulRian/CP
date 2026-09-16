import java.util.*;

public class CF1102A {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        if(n%4==1 || n%4==2)System.out.println(1);
        else System.out.println(0);
    }
}
