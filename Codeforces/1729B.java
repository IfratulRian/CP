import java.util.*;

public class cp2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        while(q-- >0){
            int n = sc.nextInt();
            String t = sc.next();
            String ans = "";
            for(int i=n-1; i>=0;){
                int num;
                if(t.charAt(i)=='0'){
                    num = (t.charAt(i-2)-'0')*10+ (t.charAt(i-1)-'0');
                    i-=3;
                }
                else{
                    num = t.charAt(i)-'0';
                    i--;
                }
                ans +=(char)('a' + num - 1);
            }
            String rev = "";
            for(int i=ans.length()-1; i>=0; i--)rev += ans.charAt(i);
            System.out.println(rev);
        }
    }
}
