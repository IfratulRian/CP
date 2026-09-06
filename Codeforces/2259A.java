import java.util.*;
public class cp3 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t-- >0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            String s = sc.next();
            int ans=0,count=0;
            for(int i=0;i<n;i++){
                if(s.charAt(i)=='0')count++;
                if((i+1)%k==0){
                    if(count==0)ans++;
                    count=0;
                }
            }
            System.out.println(ans);
        }
    }
}
